#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char **argv)
{
    // 设置随机数种子
    srandom(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        // 生成60~100之间的随机数
        printf("%d  ", random() % 41 + 60);
    }

    // 换行
    printf("\n");

    return 0;
}