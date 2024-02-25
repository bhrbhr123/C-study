#include <stdio.h>

int main(int argc, char **argv)
{
    int arr[10] = {0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int j = 0;

    // 获取键盘输入
    for (i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    // 输出遍历
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 倒置
    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        arr[i] ^= arr[j];
        arr[j] ^= arr[i];
        arr[i] ^= arr[j];
    }

    // 输出
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");


    return 0;
}