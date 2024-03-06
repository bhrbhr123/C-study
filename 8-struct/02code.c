#include <stdio.h>
#include <string.h>

struct stu
{
	int num;
	char *name;
};

int main(int argc, char **argv)
{
    struct stu lucy = {100, "lucy"};

    // 清理结构体空间
    memset(&lucy, 0, sizeof(lucy));

    // 打印
    printf("%d\n", lucy.num);

    return 0;
}