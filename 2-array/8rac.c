#include <stdio.h>

int main(int argc, char **argv)
{
    int arr[3][4] = {0};
    int row = sizeof(arr) / sizeof(arr[0]);             // 行数
    int col = sizeof(arr[0]) / sizeof(arr[0][0]);       // 列数

    printf("row = %d  col = %d\n", row, col);
    return 0;
}