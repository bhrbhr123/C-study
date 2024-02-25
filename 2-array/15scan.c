#include <stdio.h>

int main(int argc, char **argv)
{
    char str[20] = "";
    int n = sizeof(str) / sizeof(str[0]);
    int i = 0;

    // 第一次扫描并输出
    scanf("%s", str);
    for (i = 0; i < n; i++)
    {
        printf("%c ", str[i]);
    }
    printf("\n");

    // 第二次扫描并输出
    scanf("%s", str);
    for (i = 0; i < n; i++)
    {
        printf("%c ", str[i]);
    }
    printf("\n");

    return 0;
}