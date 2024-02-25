#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char str[128] = "";
    char *ret_p = NULL;
    char ch = '\0';
    int i = 0;

    // 获取键盘输入
    printf("str:");
    ret_p = fgets(str, sizeof(str), stdin);
    if (NULL == ret_p)
    {
        printf("error:fgets\n");
        return -1;
    }

    // 去掉回车
    str[strlen(str) - 1] = str[strlen(str) - 1] == '\n' ? '\0' : str[strlen(str) - 1];

    // 获取要找到的元素
    printf("find:");
    scanf("%c", &ch);

    // 查找该字符的下标
    for (i = 0; str[i] != '\0'; i++)
    {
        if (ch == str[i])
        {
            printf("找到了，下标为%d\n", i);
            break;
        }
    }
    if (str[i] == '\0')
    {
        printf("没找到\n");
    }

    return 0;
}
