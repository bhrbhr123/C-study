#include <stdio.h>

int main(int argc, char **argv)
{
    unsigned char data = 0x00;

    printf("data = %#x\n", data);
    data |= (0x1 << 3 | 0x1 << 4);
    printf("data = %#x\n", data);


    return 0;
}