#include <stdio.h>

int main(int argc, char **argv)
{
    char str[128] = "你好123世界";
    int num = 0;

    sscanf(str, "你好%d", &num);
    printf("num = %d\n", num);

    return 0;
}