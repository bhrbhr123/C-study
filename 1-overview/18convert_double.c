#include <stdio.h>

int main(int argc, char **argv)
{
    int num1 = 0;
    double num2 = 0.0;

    printf("%lu\n", sizeof(num1 + num2));       // = sizeof(double) = 8


    return 0;
}