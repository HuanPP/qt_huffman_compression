// huffman.hpp
#ifndef _HUFFMAN_HPP
#define _HUFFMAN_HPP

#include <unordered_map>
#include <cstdint>
#include <string>

class HuffmanNode {
public:
    uint8_t byte;
    uint64_t freq;
    HuffmanNode* left;
    HuffmanNode* right;

    HuffmanNode(uint8_t byte, uint64_t freq) : byte(byte), freq(freq), left(nullptr), right(nullptr) {}
};

struct Compare {
    bool operator()(HuffmanNode* l, HuffmanNode* r) {
        return l->freq > r->freq;
    }
};

class Huffman {
public:
    HuffmanNode* buildHuffmanTree(const std::unordered_map<uint8_t, uint64_t>& freqMap);
    void generateCodes(HuffmanNode* root, const std::string& code, std::unordered_map<uint8_t, std::string>& huffmanCode);
    void deleteTree(HuffmanNode* node);
};

#endif // _HUFFMAN_HPP
