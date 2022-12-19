#pragma once
#include <iostream>
#include <filesystem>

class Cipher {
public:
    static void Encode(std::string& to_encode, uint64_t key = 0) {};
    static void Decode(std::string& to_decode, uint64_t key = 0) {};
    static void Encode(const std::filesystem::path& to_encode, uint64_t key = 0);
    static void Decode(const std::filesystem::path& to_decode, uint64_t key = 0);

    Cipher() = delete;
    ~Cipher() = delete;
    Cipher& operator=(Cipher&) = delete;
};

class ReverseCipher : public Cipher {
public:
    static void Encode(std::string& to_encode, uint64_t key = 0);
    static void Decode(std::string& to_decode, uint64_t key = 0);
};