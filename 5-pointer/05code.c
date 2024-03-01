#include <stdio.h>

int main(int argc, char **argv)
{
    int num = 0;
    void *p = &num;

    *p;

    return 0;
}