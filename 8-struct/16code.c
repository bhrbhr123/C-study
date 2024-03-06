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
    ob.c = 0x01020304;
    ob.b = 0x0102;    
    ob.a = 0x01;

    printf("%#x\n", ob.a + ob.b + ob.c);         

    return 0;
}