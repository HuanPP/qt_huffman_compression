// bitstream.cpp
#include "bitstream.hpp"

void BitOutputStream::writeBit(uint8_t bit) {
    currentByte |= (bit & 1) << (7 - bitCount);
    bitCount++;
    if (bitCount == 8) {
        data.push_back(currentByte);
        currentByte = 0;
        bitCount = 0;
    }
}

std::vector<uint8_t> BitOutputStream::getData() const {
    std::vector<uint8_t> result = data;
    if (bitCount > 0) {
        result.push_back(currentByte);
    }
    return result;
}

uint8_t BitOutputStream::getPaddingBits() const {
    if (bitCount == 0) {
        return 0;
    }
    return 8 - bitCount;
}

BitInputStream::BitInputStream(const std::vector<uint8_t>& data, uint8_t paddingBits)
    : data(data) {
    if (!data.empty()) {
        currentByte = data[0];
        byteIndex = 1;
        bitCount = 0;
        totalBits = data.size() * 8 - paddingBits;
    }
}

bool BitInputStream::readBit(uint8_t& bit) {
    if (bitsRead >= totalBits) {
        return false;
    }
    if (bitCount == 8) {
        if (byteIndex >= data.size()) {
            return false;
        }
        currentByte = data[byteIndex++];
        bitCount = 0;
    }
    bit = (currentByte >> (7 - bitCount)) & 1;
    bitCount++;
    bitsRead++;
    return true;
}
