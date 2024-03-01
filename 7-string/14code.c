#include <stdio.h>
#include <string.h>

#define DEBUG
#define TOK_SIZE 30
#define FUN_ERROR -1

void show_strtok(char **p);

int main(int argc, char **argv)
{

    char *arr_p[TOK_SIZE] = {NULL};
    int i = 0;
    char str[128] = "abc;def,haha.lala;";

    i = 0;
    arr_p[i] = str;
    while ((arr_p[i] = strtok(arr_p[i], ";,.")) && ++i);

    show_strtok(arr_p);
    printf("%s\n", str);

    return 0;
}


void show_strtok(char **p)
{
#ifdef DEBUG

    int i = 0;

    printf("===================show strtok======================\n");
    for (i = 0; p[i] != NULL; i++)
    {
        printf("str%d = %s\n", i + 1, p[i]);
    } /* end of for (i = 0; p[i] != NULL; i++) */
    printf("====================================================\n");

#endif
}

#if 1
void exec_strtok(char **p, char *str)
{
    int i = 0;
    void *ret_t = NULL;

    // 清理缓冲区空间
    ret_t = memset(p, 0, TOK_SIZE * sizeof(char *));
    if (NULL == ret_t)
    {
    #ifdef DEBUG
        printf("exec_strtok error: memset\n");
    #endif
        return FUN_ERROR;
    } /* end of if (NULL == ret_t) */

    // 备份原始字符串数据
    

    // 字符串切割
    p[i] = str;
    while ((arr_p[i] = strtok(arr_p[i], ";,.")) && ++i);

}

#endif


