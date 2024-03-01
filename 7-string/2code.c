#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char str1[10] = "123456789";
    char str2[10] = "abc";
    int i = 0;

    printf("拷贝前：\n");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    // 将str2的内容拷贝到str1
    strcpy(str1, str2);
    printf("拷贝后：\n");
    printf("str1 = %s\n", str1);

    for (i = 0; i < 10; i++)
    {   
        printf("%c ", str1[i]);
    } /* end of for (i = 0; i < 10; i++) */
    printf("\n");

    return 0;
}