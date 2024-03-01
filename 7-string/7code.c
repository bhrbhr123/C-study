#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char str[20] = "hello world!";

    printf("len = %ld\n", strchr(str, '\0') - str);

    return 0;
}