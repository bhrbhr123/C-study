#include <stdio.h>

int main(int argc ,char **argv)
{
    int num = 89;

    printf("%d  \n", num);      // 以十进制输出
    printf("%o  ", num);        // 以八进制输出
    printf("%#o  \n", num);       // 以八进制的格式输出
    printf("%x  ", num);        // 以十六进制输出
    printf("%#x  \n", num);       // 以十六进制的格式输出

    

    return 0;
}