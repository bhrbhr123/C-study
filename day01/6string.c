#include <stdio.h>


int main(int argc, char **argv)
{

    char str1[128] = "hello \
    world";

    
    printf("hello world\n");

    printf("%s\n", str1);

    // Strings can be concatenated
    printf("hello ""world" "!!!!\n");


    return 0;
}
