#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *fp = NULL;
    char str[128] = "hello world!";
    long ret = 0L;

    /* 打开文件 */
    fp = fopen("test", "w+");
    if (NULL == fp)
    {
        perror("fopen");
        return -1;
    } /* end of if (NULL == fp) */

    /* 写入 */
    ret = fwrite(str, sizeof(char), sizeof(str), fp);

    printf("%ld\n", ret);

    /* 关闭文件 */
    fclose(fp);
    fp = NULL;

    return 0;
}