#include <stdio.h>

struct data
{
    int year;
    int month;
};

int main(int argc, char **argv)
{
    struct data time[3] = {{1, 2}, {3, 4}, {5, 6}};
    printf("%d\n", time[1].month);

    return 0;
}