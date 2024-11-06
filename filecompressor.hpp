// filecompressor.hpp
#ifndef FILECOMPRESSOR_HPP
#define FILECOMPRESSOR_HPP

#include "huffman.hpp"
#include "bitstream.hpp"
#include <string>
#include <unordered_map>
#include <vector>
#include <cstdint>
#include <iostream>
#include <fstream>

class FileCompressor {
public:
    bool compressFile(const std::string& inputFilePath, const std::string& outputFilePath);
    bool decompressFile(const std::string& inputFilePath, const std::string& outputFilePath);

private:
    void writeCompressedData(std::ofstream& outputFile,
                             const std::unordered_map<uint8_t, std::string>& huffmanCode,
                             const std::string& originalExtension,
                             uint8_t paddingBits);
    bool readCompressedData(std::ifstream& inputFile,
                            std::unordered_map<std::string, uint8_t>& huffmanCodeInverse,
                            std::string& originalExtension,
                            uint8_t& paddingBits);
};

#endif // FILECOMPRESSOR_HPP
