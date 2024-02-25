#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char str1[128] = "";
    char str2[128] = "";
    char *ret_p = NULL;
    int i = 0;

    // 获取键盘输入
    ret_p = fgets(str1, sizeof(str1), stdin);
    if (NULL == ret_p)
    {
        printf("error:fgets\n");
        return -1;
    }

    // 去掉回车
    str1[strlen(str1) - 1] = str1[strlen(str1) - 1] == '\n' ? '\0' : str1[strlen(str1) - 1];

    // 拷贝
    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = str1[i];

    // 输出
    printf("%s --> str2\n", str2);

    return 0;
}