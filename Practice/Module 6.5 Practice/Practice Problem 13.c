/*Write a C program to input sides of a triangle and check whether triangle is valid or not using if else.
Example
Input
Input first side: 7
Input second side: 10
Input third side: 5
Output
Triangle is valid
*/
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a+b)>c && (a+c)>b && (b+c)>a){
        printf("Triangle is valid");
    }
    else{
        printf("Triangle is not valid");
    }
}
