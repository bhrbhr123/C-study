#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int *p = NULL;

    // 申请空间
    p = (int *)calloc(1, sizeof(int));
    if (NULL == p)
    {
        printf("error:calloc\n");
        return -1;
    }

    *p = 100;
    printf("%d\n", *p);
    printf("%p\n", p);

    // 释放
    free(p);
    p = NULL;

    return 0;
}