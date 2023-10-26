#include <stdio.h>

int main(int argc, char **argv)
{

    int a = 10;
    extern int b;// There is no storage space and cannot be assigned. It is just a statement.

    printf("a = %d\n", a);

    // 8declare.c:(.text+0x35): undefined reference to `b'
    // b = 9;




    return 0;
}
