#include <stdio.h>

#define ADD(a, b) a + b 

int main(int argc, char **argv)
{

    printf("%d\n", 3 * ADD(1, 2));          // 3 * 1 + 2 = 5
    printf("%d\n", ADD(1, 2) * 3);          // 1 + 2 * 3 = 7

    return 0;
}