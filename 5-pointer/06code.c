#include <stdio.h>

int main(int argc, char **argv)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr + 3;

    printf("%d\n", *p);                 // 4
    printf("%d\n", p[-1]);              // 3
    printf("%d\n", p[1]);               // 5

    return 0;
}