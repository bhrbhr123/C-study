#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char str1[3] = "";
    char str2[3] = "";
    int i = 0;

    for (i = 0; i < 3; i++)
    {
        str1[i] = 'a';
    }

    // 结果极其不确定，但是本质上拷贝以找到'\0'结束拷贝。
    printf("%s\n", str1);
    strcpy(str2, str1);
    printf("%s\n", str1);
    printf("%s\n", str2);

    return 0;
}
