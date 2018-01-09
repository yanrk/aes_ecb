#include <cstring>
#include "openssl/aes.h"
#include "aes_ecb.h"

bool aes_ecb_encrypt_data(const unsigned char * key, size_t key_size, const unsigned char * src, size_t src_size, std::vector<unsigned char> & dst)
{
    if (nullptr == key || (16 != key_size && 24 != key_size && 32 != key_size) || nullptr == src)
    {
        return(false);
    }

    AES_KEY aes_key = { 0x00 };
    if (0 != AES_set_encrypt_key(key, key_size * 8, &aes_key))
    {
        return(false);
    }

    dst.clear();
    dst.resize((src_size + AES_BLOCK_SIZE) - (src_size % AES_BLOCK_SIZE));

    size_t pos = 0;
    while (pos <= src_size)
    {
        if (pos + AES_BLOCK_SIZE <= src_size)
        {
            AES_encrypt(src + pos, &dst[pos], &aes_key);
        }
        else
        {
            const unsigned char pad_data[AES_BLOCK_SIZE] = { 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x10 };
            unsigned char tmp_data[AES_BLOCK_SIZE] = { 0x00 };
            memcpy(tmp_data, src + pos, src_size - pos);
            memcpy(tmp_data + src_size - pos, pad_data, pos + AES_BLOCK_SIZE - src_size);
            AES_encrypt(tmp_data, &dst[pos], &aes_key);
        }
        pos += AES_BLOCK_SIZE;
    }

    return(true);
}

static bool check_decrypt_data(const unsigned char * data, unsigned char last)
{
    for (unsigned char pos = 0x00; pos < last; ++pos)
    {
        if (pos + 0x01 != data[pos])
        {
            return(false);
        }
    }
    return(true);
}

bool aes_ecb_decrypt_data(const unsigned char * key, size_t key_size, const unsigned char * src, size_t src_size, std::vector<unsigned char> & dst)
{
    if (nullptr == key || (16 != key_size && 24 != key_size && 32 != key_size) || nullptr == src || 0 == src_size || 0 != src_size % AES_BLOCK_SIZE)
    {
        return(false);
    }

    AES_KEY aes_key = { 0x00 };
    if (0 != AES_set_decrypt_key(key, key_size * 8, &aes_key))
    {
        return(false);
    }

    dst.clear();
    dst.resize(src_size);

    size_t pos = 0;
    while (pos != src_size)
    {
        AES_decrypt(src + pos, &dst[pos], &aes_key);
        pos += AES_BLOCK_SIZE;
        if (pos == src_size)
        {
            if (AES_BLOCK_SIZE >= dst.back() && check_decrypt_data(&dst[src_size - dst.back()], dst.back()))
            {
                dst.resize(src_size - dst.back());
            }
            else
            {
                return(false);
            }
        }
    }

    return(true);
}
