#include <stdio.h>

int main(int argc, char **argv)
{
    char str[10] = "";
    char *ret_p = NULL;

    ret_p = fgets(str, sizeof(str), stdin);
    if (NULL == ret_p)
    {
        printf("error\n");
        return -1;
    }

    printf("%s\n", str);


    return 0;
}