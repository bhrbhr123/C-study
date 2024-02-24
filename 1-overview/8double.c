#include <stdio.h>

int main(int argc, char **argv)
{
    float f = 0.0f;
    double d = 0.0;

    printf("请输入两个浮点数:");
    // 获取键盘输入
    scanf("%f %lf", &f, &d);
    // 输出
    printf("%f %lf\n", f, d);


    return 0;
}