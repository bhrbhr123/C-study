#include <stdio.h>

int main(int argc, char **argv)
{
    char arr[6] = "hello";
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0;

    for (i = 0; i < n; i++)
    {
        printf("%c ", arr[i]);
    }

    printf("\n");


    return 0;
}