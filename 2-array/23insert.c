#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char str1[128] = "";
    char str2[128] = "";
    char str3[128] = "";
    int pos = 0;
    char *ret_p = NULL;
    int i = 0, j = 0;
    

    // 获取输入
    printf("str1:");
    ret_p = fgets(str1, sizeof(str1), stdin);
    if (NULL == ret_p)
    {
        printf("error:fgets\n");
        return -1;
    } /* end of if (NULL == ret_p) */
    str1[strlen(str1) - 1] = str1[strlen(str1) - 1] == '\n' ? '\0' : str1[strlen(str1) - 1];

    printf("str2:");
    ret_p = fgets(str2, sizeof(str2), stdin);
    if (NULL == ret_p)
    {
        printf("error:fgets\n");
        return -1;
    } /* end of if (NULL == ret_p) */
    str2[strlen(str2) - 1] = str2[strlen(str2) - 1] == '\n' ? '\0' : str2[strlen(str2) - 1];

    printf("pos:");
    scanf("%d", &pos);

    // 尾部插入
    if (pos >= strlen(str1))
    {
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
        printf("%s\n", str1);
        return 0;
    } /* end of if (pos >= strlen(str1)) */

    // 中间插入
    for (i = 0; i != pos; i++)
    {
        str3[i] = str1[i];
    } /* end of for (i = 0; i != pos; i++) */

    for (j = 0; str2[j] != '\0'; j++, i++)
    {
        str3[i] = str2[j];
    } /* end of for (j = 0; str2[j] != '\0'; j++, i++) */

    for (; str1[pos] != '\0'; pos++, i++)
    {
        str3[i] = str1[pos];
    } /* end of for (; str1[pos] != '\0'; pos++, i++) */

    str3[i] = '\0';

    printf("%s\n", str3);

    return 0;
}