#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char *str1 = NULL;
    char str2[128] = "alkusfghsliDufhalksdguhfiuLDUFYIdfiSDUJFHsljkdhfliSHDFUH";

    // 申请空间
    str1 = (char *)calloc(5, sizeof(char));
    if (NULL == str1)
    {
        printf("error:calloc\n");
        return -1;
    } /* end of if (NULL == str1) */
    
    // 拷贝
    strcpy(str1, str2);

    // 输出
    printf("%s\n", str1);

    // 释放空间
    free(str1);
    str1 = NULL;


    return 0;
}