#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

#define ZIP_STR_MASK 0xc0 // 11000000

#pragma pack(1)
struct sds_t
{
    uint32_t len;
    uint8_t alloc;
    unsigned char flags;
    char buf[];
};
#pragma pack()

int main(int argc, char *arg[])
{
    size_t size = sizeof(struct sds_t);
    int p = 0;
    return 0;
}