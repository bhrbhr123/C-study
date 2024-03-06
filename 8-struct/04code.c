#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* 结构体的定义 */
struct stu_t
{
    int num;
    char *name;
};

int main(int argc, char **argv)
{
    struct stu_t lucy;
    struct stu_t bob;

    // 清理空间
    memset(&lucy, 0, sizeof(lucy));

    // 赋值
    lucy.num = 10;
    lucy.name = (char *)calloc(20, sizeof(char));
    if (NULL == lucy.name)
    {
        printf("calloc failed...\n");
    } /* end of if (NULL == lucy.name) */
    strcpy(lucy.name, "lucy");

    // 打印
    printf("num = %d  name = %s\n", lucy.num, lucy.name);

    // 整体赋值
    bob = lucy;

    // 打印
    printf("num = %d  name = %s\n", bob.num, bob.name);

    // 释放空间
    free(lucy.name);
    lucy.name = NULL;

    return 0;
}