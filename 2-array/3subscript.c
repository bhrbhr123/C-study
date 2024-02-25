#include <stdio.h>

int main(int argc, char **argv)
{
    int arr[5] = {[1] = 10, [3] = 30};

    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d \n", i, arr[i]);
    } 

    return 0;
}