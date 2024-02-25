#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char str[10] = "";
    char *ret_p = NULL;

    // 获取流中字符串
    ret_p = fgets(str, sizeof(str), stdin);
    if (NULL == ret_p)
    {
        printf("error\n");
    }

    // 如果获取到回车，消除
    str[strlen(str) - 1] = str[strlen(str) - 1] == '\n' ? '\0' : str[strlen(str) - 1];

    // 输出
    printf("%s\n", str);

    return 0;
}