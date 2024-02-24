#include <stdio.h>

int main(int argc, char **argv)
{
    // 变量用register修饰，不管变量有没有放在寄存器中，都无法取（内存）地址
    register int num = 0;

    &num;

    return 0;
}