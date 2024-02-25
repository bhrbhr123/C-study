#include <stdio.h>

int main(int argc, char **argv)
{
    int arr[10] = {0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = 0;
    int max = 0;
    int i = 0;

    // 获取键盘输入
    for (i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    // 输出
    max = arr[0];
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);


        // 判断最大值与最小值
        max = max >= arr[i] ? max : arr[0];
        min = min >= arr[i] ? arr[i] : min; 
    }
    printf("\n");


    // 输出结果
    printf("max = %d\n", max);
    printf("min = %d\n", min);

    return 0;
}