FILE
#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int min = 0;
    int sec = 0;

    while (1)
    {
        // 输出时钟
        printf("\r%02d:%02d", min, sec);

        // 刷新缓冲区
        fflush(stdout);

        // 睡眠1秒
        sleep(1);

        // 时钟逻辑判断
        sec++;
        if (60 == sec)
        {
            sec = 0;
            min++;
            if (60 == min)
            {
                min = 0;
            } /* end of if (60 == min) */

        } /* end of if (60 == sec) */

    } /* end of while (1) */


    return 0;
}
