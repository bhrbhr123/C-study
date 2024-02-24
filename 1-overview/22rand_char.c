#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char **argv)
{
    // 设置随机数种子
    srandom(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        printf("%c  ", random() % 26 + 'a');
    }
    printf("\n");

    return 0;
}