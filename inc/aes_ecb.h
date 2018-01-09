#ifndef AES_ECB_H
#define AES_ECB_H


#include <vector>

#ifdef _MSC_VER
    #define CRYPT_CDECL         __cdecl
    #ifdef EXPORT_CRYPT_DLL
        #define CRYPT_API       __declspec(dllexport)
    #else
        #ifdef IMPORT_CRYPT_DLL
            #define CRYPT_API   __declspec(dllimport)
        #else
            #define CRYPT_API
        #endif // IMPORT_CRYPT_DLL
    #endif // EXPORT_CRYPT_DLL
#else
    #define CRYPT_CDECL
    #define CRYPT_API
#endif // _MSC_VER

#define CRYPT_CXX_API(RET_TYPE)     extern     CRYPT_API RET_TYPE CRYPT_CDECL

CRYPT_CXX_API(bool) aes_ecb_encrypt_data(const unsigned char * key, size_t key_size, const unsigned char * src, size_t src_size, std::vector<unsigned char> & dst);
CRYPT_CXX_API(bool) aes_ecb_decrypt_data(const unsigned char * key, size_t key_size, const unsigned char * src, size_t src_size, std::vector<unsigned char> & dst);


#endif // AES_ECB_H
