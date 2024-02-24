#include <stdio.h>

int main(int argc, char **argv)
{
    int num = 0;
    printf("%lu ", sizeof(num));
    printf("%lu ", sizeof(int));

    char ch = 'a';
    printf("%lu ", sizeof(char));
    printf("%lu ", sizeof(ch));
    printf("%lu\n", sizeof('a'));

    return 0;
}