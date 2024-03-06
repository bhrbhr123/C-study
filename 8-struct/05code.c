#include <stdio.h>
#include <string.h>

/* 结构体的定义 */
struct stu_t
{
    int num;
    char name[20];
};

int main(int argc, char **argv)
{
    struct stu_t lucy;
    struct stu_t bob;

    // 清理结构体空间
    memset(&lucy, 0, sizeof(lucy));

    // 赋值
    lucy.num = 10;
    strcpy(lucy.name, "lucy");

    // 打印
    printf("num = %d  name = %s\n", lucy.num, lucy.name);

    // 内存赋值
    memcpy(&bob, &lucy, sizeof(struct stu_t));

    // 打印
    printf("num = %d  name = %s\n", bob.num, bob.name);

    return 0;
}
