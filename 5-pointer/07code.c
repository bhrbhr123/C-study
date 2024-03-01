#include <stdio.h>

int main(int argc, char **argv)
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *p1 = arr;
    int *p2 = arr + 4;

    printf("p1 = %p\n", p1);
    printf("p2 = %p\n", p2);
    printf("p2 - p1 = %p\n", p2 - p1);

    return 0;
}