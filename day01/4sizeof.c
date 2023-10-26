#include <stdio.h>

int main(int argc, char **argv)
{
    printf("char size:%lu\n", sizeof(char));
    printf("unsigned char size:%lu\n", sizeof(unsigned char));
    printf("signed char size:%lu\n", sizeof(signed char));

    printf("---------------------------------------------------\n");

    printf("short size:%lu\n", sizeof(short));
    printf("unsigned short size:%lu\n", sizeof(unsigned short));
    printf("signed short size:%lu\n", sizeof(signed short));

    printf("---------------------------------------------------\n");

    printf("int size:%lu\n", sizeof(int));
    printf("unsigned int size:%lu\n", sizeof(unsigned int));
    printf("signed int size:%lu\n", sizeof(signed int));

    printf("---------------------------------------------------\n");

    printf("long size:%lu\n", sizeof(long));
    printf("unsigned long size:%lu\n", sizeof(unsigned long));
    printf("signed long size:%lu\n", sizeof(signed long));

    printf("---------------------------------------------------\n");

    printf("float size:%lu\n", sizeof(float));
    printf("double size:%lu\n", sizeof(double));
    return 0;
}
