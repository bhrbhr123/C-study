#include <stdio.h>

int main(int argc, char **argv)
{
    int a = 3;
    a *= 4 + 5;

    printf("a = %d\n", a);

    return 0;
}