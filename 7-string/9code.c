#include <stdio.h>

int main(int argc, char **argv)
{
    int num = 666;
    char str[20] = "";

    sprintf(str, "%d", num);
    printf("str = %s\n", str);

    return 0;
}