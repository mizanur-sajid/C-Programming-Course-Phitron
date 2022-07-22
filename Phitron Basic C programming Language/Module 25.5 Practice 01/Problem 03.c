#include<stdio.h>
#include<stdbool.h>
struct Date{
    int day;
    int month;
    int year;
};
bool isValidDate(struct Date date){
    if((date.month <= 12) && ((date.year % 4== 0) && (date.year % 100 != 0) || (date.year %400==0))){
        printf("True");
        }
    else{
        printf("False");
    }
}
int main(){
        struct Date date;
        scanf("%d %d %d",&date.day,&date.month,&date.year);
        isValidDate(date);
}
