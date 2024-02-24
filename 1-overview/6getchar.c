#include <stdio.h>

int main(int argc, char **argv)
{
    char ch = '\0';

    printf("请输入一个字符:");
#if 0
    scanf("%c", &ch);       // 从缓冲区扫描一个字符
    getchar();              // 清除缓冲区中的回车
    
#else
    ch = getchar();
    getchar();

#endif

    printf("%c\n", ch);
    printf("%d\n", ch);

    return 0;
}