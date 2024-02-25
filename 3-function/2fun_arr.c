#include <stdio.h>

void fun(char str[])
{
    str[0] = 'H';
}

int main(int argc, char **argv)
{
    char str[10] = "hello";

    printf("%s\n", str);
    fun(str);
    printf("%s\n", str);

    return 0;
}