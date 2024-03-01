#include <stdio.h>

int main(int argc, char **argv)
{
    char str1[128] = "12345678";
    char str2[128] = "";
    int num = 0;

    sscanf(str1, "%*2d%2d%*1d%2s", &num, str2);
    printf("%d %s\n", num, str2);

    return 0;
}