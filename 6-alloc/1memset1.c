#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    int arr1[10] = {0};
    unsigned char arr2[10] = "";
    int i = 0;

    memset(arr1, 1, sizeof(arr1));
    memset(arr2, 1, sizeof(arr2));

    for (i = 0; i < 10; i++)
    {
        printf("%#x ", arr1[i]);
    }
    printf("\n");

    for (i = 0; i < 10; i++)
    {
        printf("%#x ", arr2[i]);
    }
    printf("\n");

    return 0;
}