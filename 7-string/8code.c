#include <stdio.h>

int main(int argc, char **argv)
{
    int year = 2024;
    int month = 2;
    int day = 29;
    int len = 0;
    char str[128] = "";

    len = sprintf(str, "%d年%d月%d日", year, month, day);

    printf("len = %d  str = %s\n", len, str);

    return 0;
}