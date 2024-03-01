#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char *p = NULL;
    p = (char *)calloc(4, sizeof(char));
    if (NULL == p)
    {
        printf("error:calloc\n");
        return -1;
    }

    free(p);
    p = NULL;

    return 0;
}