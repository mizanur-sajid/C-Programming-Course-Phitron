/**
1. We are creating a structure called Date.
2. We are creating a variable today of type Date.
3. We are assigning values to the members of the structure using dot operator.
4. We are printing the values of the members using dot operator.
**/
#include<stdio.h>
typedef struct Date{
    int day;
    int month;
    int year;
}Date;

int main()
{
    Date today = {12,2,2022};
         today = (struct Date){10,12,2022};
    printf("%d-%d-%d\n", today.day,today.month,today.year);
}
