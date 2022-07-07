#include<stdio.h>
#include<string.h>
struct Time{
    int hour;
    int minute;
    int second;
};
struct Interval{
    struct Time start;
    struct Time end;
};

int main()
{
    struct Interval diff = {{5,30,00},{10,15,00}};
}


