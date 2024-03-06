#include <stdio.h>
#include <string.h>

// 结构体的定义
struct _stu_t
{
    int num;
    char name[32];
};

int main(int argc, char **argv)
{
    struct _stu_t lucy;
    struct _stu_t *p = &lucy;

    lucy.num = 8;
    strcpy(lucy.name, "lucy");

    printf("num = %d  name = %s\n", lucy.num, lucy.name);
    printf("num = %d  name = %s\n", (&lucy)->num, (&lucy)->name);
    printf("num = %d  name = %s\n", p->num, p->name);
    printf("num = %d  name = %s\n", (*p).num, (*p).name);

    return 0;
}