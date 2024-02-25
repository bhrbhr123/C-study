#include <stdio.h>

int main(int argc, char **argv)
{   
    // 数组的定义并初始化
    int arr[6] = {0};

    printf("sizeof(arr) = %lu\n", sizeof(arr));             // 数组总大小 == 元素个数 * 每个元素的大小
    printf("sizeof(arr[0]) = %lu\n", sizeof(arr[0]));       // 数组元素大小
    printf("sizeof(arr) / sizeof(arr[0]) = %lu\n", sizeof(arr) / sizeof(arr[0]));   // 元素个数

    return 0;
}