#include <stdio.h>

int main(int argc, char **argv)
{
    char str1[128] = "[alkjdghfasdjkhfb]";
    char str2[128] = "";

    sscanf(str1, "%*1s%[^]]", str2);
    printf("%s\n", str2);

    return 0;
}