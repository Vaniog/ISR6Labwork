#include "../lib/cipher.h"

#include <gtest/gtest.h>
#include <sstream>

TEST(CipherTestSuite, DefaultCipher){
    std::string str = "Hello world!";
    std::string old_str = str;
    ReverseCipher::Encode(str);
    ASSERT_FALSE(str == old_str);
    ReverseCipher::Decode(str);
    ASSERT_TRUE(str == old_str);
}