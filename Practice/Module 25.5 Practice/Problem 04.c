/**
Write a function isBirthday that takes a student and a date and determines if his birthday is on that date. Your signature should be
bool isBirthday(struct Date date, struct Student student);
**/
#include<stdio.h>
#include<stdbool.h>
struct Date {
  int dat;
  int month;
  int year;
};

struct Student{
    char name[100];
    int class;
    int roll;
    struct Date dof;
};

int main()
{
    //struct Date date = {1,1,2000};
    struct Student std = {"Sorif",10,100};
    //struct Student Date dob = {1,1,1996};
    std = (struct Student){"Arif",10,50};
    //std.name[100] = "Arif";
    //std.roll = 50;
    printf("After update:%s %d %d",std.name,std.class,std.roll);
}
