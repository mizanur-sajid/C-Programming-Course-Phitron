#include<stdio.h>
#include<stdbool.h>
struct Date{
    int day;
    int month;
    int year;
};

struct Date getFirstDay(int year){
    struct Date ans = {1,1,year};
    return ans;
}

struct Date printDate(struct Date date){
    printf("%d-%d-%d\n",date.day, date.month, date.year);
}

int main()
{
    struct Date date = getFirstDay(2000);
    printDate(date);
}
