#include <stdio.h>

int main(int argc, char **argv)
{
    short num1 = 0;
    char ch = 'a';

    printf("%lu\n", sizeof(num1 + num1));       // 4
    printf("%lu\n", sizeof(num1 + ch));         // 4
    printf("%lu\n", sizeof(ch + ch));           // 4

    return 0;
}