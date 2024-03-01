#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    int arr1[10] = {0};
    int arr2[10] = {0};
    int i = 0;

    memset(arr1, 1, sizeof(arr1));
    memcpy(arr2, arr1, 8);

    for (i = 0; i < 10; i++)
    {
        printf("%#x ", arr2[i]);
    }
    printf("\n");

    return 0;
}