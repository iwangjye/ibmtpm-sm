/* crypto/sm3/sm3.h */
#ifndef HEADER_SM3_H
#define HEADER_SM3_H

#define SM3_DIGEST_LENGTH	32
#define SM3_BLOCK_SIZE		64

#include <sys/types.h>
#include <stdint.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
	uint32_t digest[8];
	int nblocks;
	unsigned char block[64];
	int num;
} SM3_256_CTX;

int SM3_256_Init(SM3_256_CTX *ctx);
int SM3_256_Update(SM3_256_CTX *ctx, const unsigned char* data, size_t data_len);
int SM3_256_Final(unsigned char digest[SM3_DIGEST_LENGTH], SM3_256_CTX *ctx);
void sm3_compress(uint32_t digest[8], const unsigned char block[SM3_BLOCK_SIZE]);
void sm3(const unsigned char *data, size_t datalen, unsigned char digest[SM3_DIGEST_LENGTH]);

#ifdef __cplusplus
}
#endif
#endif

