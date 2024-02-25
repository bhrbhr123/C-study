#include <stdio.h>

int main(int argc, char **argv)
{
    int arr[5] = {0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0;

    // 获取键盘输入
    for (i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    // 遍历输出
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // 换行
    printf("\n");

    return 0;
}