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

    // lucy赋值
    lucy.num = 10;
    strcpy(lucy.name, "lucy");

    // 输出
    printf("num = %d  name = %s\n", lucy.num, lucy.name);

    // 逐个成员赋值
    bob.num = lucy.num;
    strcpy(bob.name, lucy.name);

    // 输出
    printf("num = %d  name = %s\n", bob.num, bob.name);


    return 0;
}