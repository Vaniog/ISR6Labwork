#include "cipher.h"

#include <algorithm>
#include <fstream>

void Cipher::Encode(const std::filesystem::path& to_encode, uint64_t key) {
    std::ifstream file_in(to_encode);
    std::stringstream buffer;
    buffer << file_in.rdbuf();
    std::string str = buffer.str();
    Encode(str, key);
    file_in.close();

    std::ofstream file_out(to_encode);
    file_out << str;
}
void Cipher::Decode(const std::filesystem::path& to_decode, uint64_t key) {

    std::ifstream file_in(to_decode);
    std::stringstream buffer;
    buffer << file_in.rdbuf();
    std::string str = buffer.str();
    Decode(str, key);
    file_in.close();

    std::ofstream file_out(to_decode);
    file_out << str;
}

void ReverseCipher::Encode(std::string& to_encode, uint64_t key) {
    std::reverse(to_encode.begin(), to_encode.end());
}
void ReverseCipher::Decode(std::string& to_decode, uint64_t key) {
    std::reverse(to_decode.begin(), to_decode.end());
}