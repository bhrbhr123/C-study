#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char str1[128] = "";
    char str2[128] = "";
    char *ret_p = NULL;
    int i = 0;
    int j = 0;

    // 获取键盘输入
    printf("str1:");
    ret_p = fgets(str1, sizeof(str1), stdin);
    if (NULL == ret_p)
    {
        printf("error:fgets\n");
        return -1;
    } /* end of if (NULL == ret_p) */

    printf("str2:");
    ret_p = fgets(str2, sizeof(str2), stdin);
    if (NULL == ret_p)
    {
        printf("error:fgets\n");
        return -1;
    } /* end of if (NULL == ret_p) */

    // 去掉回车
    str1[strlen(str1) - 1] = str1[strlen(str1) - 1] == '\n' ? '\0' : str1[strlen(str1) - 1];
    str2[strlen(str2) - 1] = str2[strlen(str2) - 1] == '\n' ? '\0' : str2[strlen(str2) - 1];


    // 追加
    for (i = strlen(str1), j = 0; i == sizeof(str1) || str2[j] != '\0'; i++, j++)
    {
        str1[i] = str2[j];
    } /* end of for (i = strlen(str1), j = 0; i == sizeof(str1) || str2[j] != '\0'; i++, j++) */

    // 判断退出条件
    if (i == sizeof(str1))
    {
        str1[i - 1] = '\0';
    }
    else 
    {
        str1[i] = str2[j];
    }

    printf("%s --> str1\n", str1);

    return 0;
}