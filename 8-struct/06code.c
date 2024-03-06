#include <stdio.h>

struct _date_t
{
    int year;
    int month;
    int day;
};

struct _stu_t
{
    int num;
    char *name;
    struct _date_t day;
};

int main(int argc, char **argv)
{
    struct _stu_t lucy = {10, "lucy", {2024, 3, 5}};

    printf("num: %d  name: %s  year: %d  month: %d  day: %d\n", lucy.num, 
                                                                lucy.name,     
                                                                lucy.day.year,
                                                                lucy.day.month,
                                                                lucy.day.day);


    return 0;
}