#include <stdio.h>

int main(int argc, char **argv)
{
    char str[128] = "你好123世界";
    char dest[128] = "";

    sscanf(str, "%s", dest);
    printf("%s\n", dest);

    return 0;
}