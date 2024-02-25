#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
    int arr[10] = {0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int j = 0;
    int min = 0;

    // 设置随机数种子
    srandom(time(NULL));

    // 随机数输入数组
    for (i = 0; i < n; i++)
    {
        arr[i] = random() % 100 + 1;
    }

    // 遍历输出
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

#if 0
    // 选择法排序
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            min = arr[min] > arr[j] ? j : min;
        }
        if (min != i)
        {
            arr[min] ^= arr[i];
            arr[i] ^= arr[min];
            arr[min] ^= arr[i];
        }
    }


#else
    // 冒泡法排序
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                arr[j + 1] ^= arr[j];
                arr[j] ^= arr[j + 1];
                arr[j + 1] ^= arr[j];
            }
        }
    }

#endif

    // 遍历输出
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}