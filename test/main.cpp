#include <cassert>
#include <iostream>
#include "aes_ecb.h"

void print(const std::vector<unsigned char> & src, const std::vector<unsigned char> & dst)
{
    std::cout << "<";
    for (std::vector<unsigned char>::const_iterator iter = src.begin(); src.end() != iter; ++iter)
    {
        std::cout << *iter;
    }
    std::cout << "> - <";
    for (std::vector<unsigned char>::const_iterator iter = dst.begin(); dst.end() != iter; ++iter)
    {
        std::cout << *iter;
    }
    std::cout << ">";
    std::cout << std::endl;
}

int main(int, char * [])
{
    unsigned char key[16] = { 0x00 };
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(""), static_cast<size_t>(0), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (!dst.empty())
        {
            assert(false);
        }
        print(dst, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "1";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "12";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "123";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "1234";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "12345";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "123456";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "1234567";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "12345678";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "123456789";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "1234567890";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "12345678901";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "123456789012";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "1234567890123";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "12345678901234";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "123456789012345";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "1234567890123456";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "12345678901234567";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "123456789012345678";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "1234567890123456789";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "12345678901234567890";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "123456789012345678901";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "1234567890123456789012";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "12345678901234567890123";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "123456789012345678901234";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "1234567890123456789012345";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "12345678901234567890123456";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "123456789012345678901234567";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "1234567890123456789012345678";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "12345678901234567890123456789";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "123456789012345678901234567890";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "1234567890123456789012345678901";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "12345678901234567890123456789012";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "123456789012345678901234567890123";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "1234567890123456789012345678901234";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    {
        std::vector<unsigned char> dst;
        std::vector<unsigned char> enc;
        std::string tmp = "this is a test line for openssl aes 128";
        std::vector<unsigned char> src(tmp.begin(), tmp.end());
        if (!aes_ecb_encrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&src[0]), static_cast<size_t>(src.size()), enc))
        {
            assert(false);
        }
        if (!aes_ecb_decrypt_data(key, sizeof(key)/sizeof(key[0]), reinterpret_cast<const unsigned char *>(&enc[0]), static_cast<size_t>(enc.size()), dst))
        {
            assert(false);
        }
        if (src != dst)
        {
            assert(false);
        }
        print(src, dst);
    }
    return(0);
}
