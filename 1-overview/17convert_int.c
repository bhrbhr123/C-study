#include <stdio.h>

int main(int argc, char **argv)
{
    int num1 = -10;
    unsigned int num2 = 6;

    if (num1 + num2 > 0)                // unsigned int > 0
    {
        printf(">0\n");
    }
    else 
    {
        printf("<0\n");
    }

    printf("%d\n", num1 + num2);        // %d输出unsigned int类型只看最高位，为1，转换为补码输出
    printf("%u\n", num1 + num2);        // 内存原码输出

    return 0;
}