/*Write a C program that accepts two integers and prints true if either one is 5 or their sum or difference is 5.*/
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a,&b);

    if((a==5) || (b==5) || (a+b==5) || (a-b ==5) ){
        printf("True");
    }
}
