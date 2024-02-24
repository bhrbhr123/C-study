#include <stdio.h>

int main(int argc, char **argv)
{
    int num1 = 0xf0000009;
    unsigned int num2 = 0xf0000009;
    int num3 = 0x00000009;
    unsigned int num4 = 0x00000009;

    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    printf("num3 = %d\n", num3);
    printf("num4 = %d\n", num4);

    return 0;
}