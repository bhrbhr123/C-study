#include <stdio.h>

int main(int argc, char **argv)
{
    char ch = '\0';

    printf("请输入一个字符:");
    ch = getchar();
    if (ch >= 'a' && ch <= 'z')
    {
        ch -= 32;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        ch += 32;
    }
    else 
    {
        printf("输入错误\n");
        return -1;
    }
    printf("%c\n", ch);

    return 0;
}