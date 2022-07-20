/*How to write all the date of a year??*/
#include<stdio.h>
struct Date{
    int day;
    int month;
    int year;
};

int daysInMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    struct Date start;
    int days;

    printf("Start Date: ");
    scanf("%d %d %d",&start.day, &start.month, &start.year);

    printf("How many days: ");
    scanf("%d",&days);

    struct Date nextDate = start;

    for (int i=0; i<days; i++) {
        if (nextDate.day != daysInMonths[nextDate.month-1]){
            nextDate.day++;
        }
        else if (nextDate.month != 12) {
            nextDate.day = 1;
            nextDate.month++;
        }
        else {
            nextDate.day = 1;
            nextDate.month = 1;
            nextDate.year += 1;
        }
        printf("Next date: %d-%d-%d\n", nextDate.day, nextDate.month, nextDate.year);
    }
}
