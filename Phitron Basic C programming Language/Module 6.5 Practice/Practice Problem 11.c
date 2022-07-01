/*  Write a program in C that takes two inputs x and y and prints all numbers that are multiples of x but divisors of y.
If there are none, print no such integers.
Test Data :
5 20
Expected Output :
5 10 20
Test Data :
6 20
Expected Output :
No such integers
*/
#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(y%x==0)
    {
        for(int i=1;i<=20;i++){
            if((i%x==0)&&(y%i==0)){
                printf("%d\t",i);
            }
        }
    }else{
        printf("No such integers");
    }
}
