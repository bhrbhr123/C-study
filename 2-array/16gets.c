#include <stdio.h>

int main(int argc, char **argv)
{
    char str[50] = "";

    gets(str);
    printf("str = %s\n", str);

    return 0;
}