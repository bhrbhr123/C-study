#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char str[128] = "hello";

    printf("%lu\n", strlen(str));

    return 0;
}