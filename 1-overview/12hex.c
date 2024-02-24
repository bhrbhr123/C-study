#include <stdio.h>

int main(int argc, char **argv)
{
    int num1 = 0xf0000009;
    int num2 = 0x00000009;
    unsigned int num3 = 0xf0000009;
    unsigned int num4 = 0x00000009;

    char ch1 = 0xf5;
    char ch2 = 0x05;
    unsigned char ch3 = 0xf5;
    unsigned char ch4 = 0x05;


    // 输出
    printf("num1 = %#x\n", num1);
    printf("num2 = %#x\n", num2);
    printf("num3 = %#x\n", num3);
    printf("num4 = %#x\n", num4);

    printf("ch1 = %#x\n", ch1);
    printf("ch2 = %#x\n", ch2);
    printf("ch3 = %#x\n", ch3);
    printf("ch4 = %#x\n", ch4);


    return 0;
}