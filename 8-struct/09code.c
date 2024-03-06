#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// 结构体的定义
struct _stu_t
{
    int num;
    char *name;
};

int main(int argc, char **argv)
{
    struct _stu_t lucy;

    // 给指针成员分配空间
    lucy.name = (char *)calloc(128, sizeof(char));
    if (NULL == lucy.name)
    {
        printf("calloc failed...");
        return -1;
    } /* end of if (NULL == lucy.name) */

    // 成员赋值
    lucy.num = 8;
    strcpy(lucy.name, "lucy");

    // 打印
    printf("num: %d  name: %s\n", lucy.num, lucy.name);

    // 最后释放空间
    free(lucy.name);
    lucy.name = NULL;

    return 0;
}