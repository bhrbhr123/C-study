#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 结构体的定义
struct _stu_t
{
    int num;
    char *name;
};

int main(int argc, char **argv)
{
    // 因结构体是在堆区申请的，故需要一个结构体指针
    struct _stu_t *lucy_p = NULL;

    // 申请结构体的空间
    lucy_p = (struct _stu_t *)calloc(1, sizeof(struct _stu_t));
    if (NULL == lucy_p)
    {
        printf("calloc failed...\n");
        return -1;
    } /* end of if (NULL == lucy_p) */

    // 申请指针成员的空间
    lucy_p->name = (char *)calloc(30, sizeof(char));
    if (NULL == lucy_p->name)
    {
        printf("calloc failed...");
        return -1;
    } /* end of if (NULL == lucy_p->name) */

    // 成员赋值
    lucy_p->num = 9;
    strcpy(lucy_p->name, "lucy");

    // 打印
    printf("num: %d  name: %s\n", lucy_p->num, lucy_p->name);

    // 释放指针成员空间
    free(lucy_p->name);
    lucy_p->name = NULL;

    // 释放结构体的空间
    free(lucy_p);
    lucy_p = NULL;

    return 0;
}