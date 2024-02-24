#include <stdio.h>

int main(int argc, char **argv)
{
    char ch1 = 0xf9;
    char ch2 = 0x09;
    unsigned char ch3 = 0xf9;
    unsigned char ch4 = 0x09;

    printf("ch1 = %d\n", ch1);
    printf("ch2 = %d\n", ch2);
    printf("ch3 = %d\n", ch3);
    printf("ch4 = %d\n", ch4);

    return 0;
}