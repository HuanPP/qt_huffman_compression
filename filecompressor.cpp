// filecompressor.cpp
#include "filecompressor.hpp"
#include <filesystem>
#include <sstream>
#include <iostream>
#include <iomanip>

namespace fs = std::filesystem;

bool FileCompressor::compressFile(const std::string& inputFilePath, const std::string& outputFilePath) {
    // 构建频率表
    std::unordered_map<uint8_t, uint64_t> freqMap;
    std::ifstream inputFile(inputFilePath, std::ios::binary);
    if (!inputFile.is_open()) return false;

    std::cout << "正在统计频率..." << std::endl;
    const size_t bufferSize = 8192;
    char buffer[bufferSize];
    while (inputFile.read(buffer, bufferSize) || inputFile.gcount() > 0) {
        std::streamsize bytesRead = inputFile.gcount();
        for (std::streamsize i = 0; i < bytesRead; ++i) {
            uint8_t byte = static_cast<uint8_t>(buffer[i]);
            freqMap[byte]++;
        }
    }
    inputFile.close();

    // 构建 Huffman 树并生成编码表
    Huffman huffman;
    HuffmanNode* root = huffman.buildHuffmanTree(freqMap);

    std::unordered_map<uint8_t, std::string> huffmanCode;
    huffman.generateCodes(root, "", huffmanCode);

    // 将编码表写入压缩文件
    std::ofstream outputFile(outputFilePath, std::ios::binary);
    if (!outputFile.is_open()) return false;

    std::string originalExtension = fs::path(inputFilePath).extension().string();

    uint8_t paddingBits = 0; // 先占位，稍后计算

    writeCompressedData(outputFile, huffmanCode, originalExtension, paddingBits);

    // 开始压缩文件内容
    inputFile.open(inputFilePath, std::ios::binary);
    if (!inputFile.is_open()) return false;

    std::cout << "正在压缩文件..." << std::endl;
    BitOutputStream bos;
    while (inputFile.read(buffer, bufferSize) || inputFile.gcount() > 0) {
        std::streamsize bytesRead = inputFile.gcount();
        for (std::streamsize i = 0; i < bytesRead; ++i) {
            uint8_t byte = static_cast<uint8_t>(buffer[i]);
            const std::string& code = huffmanCode[byte];
            for (char bitChar : code) {
                uint8_t bit = bitChar - '0';
                bos.writeBit(bit);
            }
        }
    }
    inputFile.close();

    // 获取压缩数据和填充位数量
    std::vector<uint8_t> compressedData = bos.getData();
    paddingBits = bos.getPaddingBits();

    // 回到文件开头，更新填充位数量
    outputFile.seekp(0, std::ios::beg);
    writeCompressedData(outputFile, huffmanCode, originalExtension, paddingBits);

    // 移动到文件末尾，写入压缩数据
    outputFile.seekp(0, std::ios::end);
    outputFile.write(reinterpret_cast<const char*>(compressedData.data()), compressedData.size());
    outputFile.close();

    huffman.deleteTree(root);
    return true;
}

bool FileCompressor::decompressFile(const std::string& inputFilePath, const std::string& outputFilePath) {
    std::ifstream inputFile(inputFilePath, std::ios::binary);
    if (!inputFile.is_open()) return false;

    std::unordered_map<std::string, uint8_t> huffmanCodeInverse;
    std::string originalExtension;
    uint8_t paddingBits = 0;

    if (!readCompressedData(inputFile, huffmanCodeInverse, originalExtension, paddingBits)) {
        return false;
    }

    // 读取压缩数据
    std::vector<uint8_t> compressedData((std::istreambuf_iterator<char>(inputFile)),
                                        std::istreambuf_iterator<char>());
    inputFile.close();

    BitInputStream bis(compressedData, paddingBits);
    std::ofstream outputFile(outputFilePath + originalExtension, std::ios::binary);
    if (!outputFile.is_open()) return false;

    std::cout << "正在解压文件..." << std::endl;
    std::string currentCode;
    uint8_t bit;

    while (bis.readBit(bit)) {
        currentCode += (bit == 0) ? '0' : '1';
        auto it = huffmanCodeInverse.find(currentCode);
        if (it != huffmanCodeInverse.end()) {
            uint8_t byte = it->second;
            outputFile.write(reinterpret_cast<const char*>(&byte), sizeof(byte));
            currentCode.clear();
        }
    }
    outputFile.close();

    return true;
}

void FileCompressor::writeCompressedData(std::ofstream& outputFile,
                                         const std::unordered_map<uint8_t, std::string>& huffmanCode,
                                         const std::string& originalExtension,
                                         uint8_t paddingBits) {
    // 写入扩展名长度和扩展名
    uint32_t extLength = originalExtension.size();
    outputFile.write(reinterpret_cast<const char*>(&extLength), sizeof(extLength));
    if (!originalExtension.empty()) {
        outputFile.write(originalExtension.data(), originalExtension.size());
    }

    // 写入填充位数量
    outputFile.write(reinterpret_cast<const char*>(&paddingBits), sizeof(paddingBits));

    // 写入编码表大小
    uint32_t codeTableSize = huffmanCode.size();
    outputFile.write(reinterpret_cast<const char*>(&codeTableSize), sizeof(codeTableSize));

    // 写入编码表
    for (const auto& pair : huffmanCode) {
        uint8_t byte = pair.first;
        const std::string& code = pair.second;
        uint32_t codeLength = code.size();

        outputFile.write(reinterpret_cast<const char*>(&byte), sizeof(byte));
        outputFile.write(reinterpret_cast<const char*>(&codeLength), sizeof(codeLength));
        outputFile.write(code.data(), code.size());
    }
}

bool FileCompressor::readCompressedData(std::ifstream& inputFile,
                                        std::unordered_map<std::string, uint8_t>& huffmanCodeInverse,
                                        std::string& originalExtension,
                                        uint8_t& paddingBits) {
    // 读取扩展名长度和扩展名
    uint32_t extLength = 0;
    inputFile.read(reinterpret_cast<char*>(&extLength), sizeof(extLength));
    if (extLength > 0) {
        originalExtension.resize(extLength);
        inputFile.read(&originalExtension[0], extLength);
    }

    // 读取填充位数量
    inputFile.read(reinterpret_cast<char*>(&paddingBits), sizeof(paddingBits));

    // 读取编码表大小
    uint32_t codeTableSize = 0;
    inputFile.read(reinterpret_cast<char*>(&codeTableSize), sizeof(codeTableSize));

    // 读取编码表
    for (uint32_t i = 0; i < codeTableSize; ++i) {
        uint8_t byte = 0;
        uint32_t codeLength = 0;

        inputFile.read(reinterpret_cast<char*>(&byte), sizeof(byte));
        inputFile.read(reinterpret_cast<char*>(&codeLength), sizeof(codeLength));

        std::string code(codeLength, '0');
        inputFile.read(&code[0], codeLength);

        huffmanCodeInverse[code] = byte;
    }

    return true;
}
