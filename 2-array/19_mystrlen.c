#include <stdio.h>
#include <string.h>


int main(int argc, char **argv)
{
    char str[128] = "";
    char *ret_p = NULL;
    int i = 0;
    int len = 0;

    // 获取一个字符串
    ret_p = fgets(str, sizeof(str), stdin);
    if (NULL == ret_p)
    {
        printf("error:fgets\n");
        return -1;
    }

    // 消除回车
    str[strlen(str) - 1] = str[strlen(str) - 1] == '\n' ? '\0' : str[strlen(str) - 1];

    // 计算字符串长度
    for (i = 0; str[i] != '\0'; i++)
    {
        /*do nothing*/;
    }

    len = i;

    printf("长度为%d\n", len);

    return 0;
}