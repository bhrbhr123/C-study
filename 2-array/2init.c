#include <stdio.h>

int main(int argc, char **argv)
{
    int arr[5] = {10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0;


    for (i = 0; i < n; i++)
    {
        printf("arr[%d] = %d \n", i, arr[i]);
    } 

    return 0;
}