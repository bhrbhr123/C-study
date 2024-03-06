#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 结构体指针数组的个数
#define ARR_NUM 5

// 结构体的定义
struct _stu_t
{
    int num;
    char *name;
};

int main(int argc, char **argv)
{
    // 结构体指针数组在堆区，故创建二维结构体指针即可
    struct _stu_t **p = NULL;

    int i = 0;

    // 创建结构体指针数组的空间
    p = (struct _stu_t **)calloc(ARR_NUM, sizeof(struct _stu_t *));
    if (NULL == p)
    {
        printf("calloc failed...\n");
        return -1;
    } /* end of if (NULL == p) */

    
    for (i = 0; i < ARR_NUM; i++)
    {
        // 申请结构体的空间
        p[i] = (struct _stu_t *)calloc(1, sizeof(struct _stu_t));
        if (NULL == p[i])
        {
            printf("calloc failed...\n");
            return -2;
        } /* end of if (NULL == p[i]) */

        // 申请指针成员的空间
        p[i]->name = (char *)calloc(128, sizeof(char));
        if (NULL == p[i]->name)
        {   
            printf("calloc failed...\n");
            return -3;
        } /* end of if (NULL == p[i]->name) */

    } /* end of for (i = 0; i < ARR_NUM; i++) */


    for (i = 0; i < ARR_NUM; i++)
    {
        // 释放指针成员空间
        free(p[i]->name);
        p[i]->name = NULL;

        // 释放结构体的空间
        free(p[i]);
        p[i] = NULL;
    } /* end of for (i = 0; i < ARR_NUM; i++) */


    // 释放数组空间
    free(p);
    p = NULL;

    return 0;
}