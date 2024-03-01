#include <stdio.h>

int main(int argc, char **argv)
{
    char *p = "hello world";

    printf("%c\n", p[6]);
    printf("%s\n", p + 6);
    p[6] = 'W';

    return 0;
}