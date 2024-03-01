#include <stdio.h>

int main(int argc, char **argv)
{
    int num = 0x01020304;
    unsigned char *p = NULL;
    p = (char *)&num;                   // 注意类型匹配

    p += 2;                             // 指针移位，注意跨度。
    printf("%#x\n", *(short *)p);       // 取值，注意取值宽度。

    return 0;
}