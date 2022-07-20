/**
1. It is taking the input of two dates from the user.
2. Then it is comparing the dates and printing the result.
**/
#include<stdio.h>
typedef struct date {
    int day;
    int month;
    int year;
}date;

int main()
{
    date date1, date2;
    printf("Enter the 1st person birthday date: %" );
    scanf("%d %d %d",&date1.day,&date1.month,&date1.year);

    printf("Enter the 2nd person birthday date: %" );
    scanf("%d %d %d",&date2.day,&date2.month,&date2.year);

    if(date1.day == date2.day && date1.month == date2.month && date1.year == date2.year)
    {
        printf("They are in same age.");
    }
    else{
        printf("They aren't in same age.");
    }
    getchar();
}
