#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char str1[20] = "abcdefg1234567";
    char str2[20] = {'8', '8', '\0', '8', '8', '8', '8', '8', '8', '8', '8', '8', '8', '8'};
    int i = 0;

    // 拷贝前5个字符给str1
    strncpy(str1, str2, 5);

    // 输出
    for (i = 0; i < 20; i++)
    {
        printf("%c ", str1[i]);
    } /* end of for (i = 0; i < 20; i++) */
    printf("\n");


    printf("%s\n", str1);


    return 0;
}
