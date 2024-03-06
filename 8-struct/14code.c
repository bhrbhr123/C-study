#include <stdio.h>

struct A
{
    unsigned char a : 4;
    unsigned char : 2;
    unsigned char b : 2;
};

int main(int argc, char **argv)
{
    printf("%lu\n", sizeof(struct A));
    return 0;
}