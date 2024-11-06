// bitstream.hpp
#ifndef BITSTREAM_HPP
#define BITSTREAM_HPP

#include <vector>
#include <cstdint>

class BitOutputStream {
public:
    void writeBit(uint8_t bit);
    std::vector<uint8_t> getData() const;
    uint8_t getPaddingBits() const;

private:
    std::vector<uint8_t> data;
    uint8_t currentByte = 0;
    uint8_t bitCount = 0;
};

class BitInputStream {
public:
    BitInputStream(const std::vector<uint8_t>& data, uint8_t paddingBits);
    bool readBit(uint8_t& bit);

private:
    const std::vector<uint8_t>& data;
    size_t byteIndex = 0;
    uint8_t currentByte = 0;
    uint8_t bitCount = 8;
    size_t totalBits = 0;
    size_t bitsRead = 0;
};

#endif // BITSTREAM_HPP
