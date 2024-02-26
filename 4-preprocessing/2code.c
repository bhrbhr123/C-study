#include <stdio.h>
#define ADD(a, b) a + b

int main(int argc, char **argv)
{
    int num1 = 10;
    int num2 = 30;

    printf("%d\n", ADD(1, 2));
    printf("%d\n", ADD(num1, num2));

    return 0;
}