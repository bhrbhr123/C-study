#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char str[20] = "hello world";
    char *p = NULL;

    p = strchr(str, 'p');
    printf("%p\n", p);

    return 0;
}