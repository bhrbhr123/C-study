#include <stdio.h>

int main(int argc, char **argv)
{
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;
    int num4 = 40;
    int *arr[4] = {&num1, &num2, &num3, &num4};

    int i = 0;

    for (i = 0; i < 4; i++)
    {
        printf("%d ", *arr[i]);
    }
    printf("\n");

    return 0;
}