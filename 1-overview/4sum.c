#include <stdio.h>

int main(int argc, char **argv)
{
    int num1 = 0;
    int num2 = 0;

    printf("请输入两个数字:");
    scanf("%d:%d", &num1, &num2);
    printf("%d + %d = %d\n", num1, num2, num1 + num2);

    return 0;
}