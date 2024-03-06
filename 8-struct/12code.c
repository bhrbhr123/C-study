#include <stdio.h>
#pragma pack(2)

struct A
{
    char a;
    int b;
    short c;
};

int main(int argc, char **argv)
{
    printf("%lu\n", sizeof(struct A));      // 8
    return 0;
}