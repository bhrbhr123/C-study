#include <stdio.h>

union Data
{
    char a;
    short b;
    int c;
};

int main(int argc, char **argv)
{
    union Data ob;
    ob.a = 10;
    ob.b = 20;
    ob.c = 30;

    printf("%d\n", ob.a + ob.b + ob.c);         // 30 + 30 + 30 = 90

    return 0;
}