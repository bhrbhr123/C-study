#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
    int arr[3][4] = {0};
    int row = sizeof(arr) / sizeof(arr[0]);
    int col = sizeof(arr[0]) / sizeof(arr[0][0]);
    int i = 0, j = 0;

    // 设置随机数种子
    srandom(time(NULL));

    // 随机数输入数组
    for(i = 0; i < row * col; i++)
    {
        arr[0][i] = random() % 100 + 1;
    }

    // 数组遍历
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}