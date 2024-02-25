#include <stdio.h>

int main(int argc, char **argv)
{
    int arr1[3][4] = {{1, 2}, {5, 6}, {9, 10, 11}};
    int arr2[3][4] = {1, 2, 5, 6, 9, 10, 11};

    printf("%d\n", arr1[1][2] + arr2[1][2]);        // 0+11=11

    return 0;
}