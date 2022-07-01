/*Write a C program to check whether a given non-negative number is a multiple of 3 or 7, but not both.
For example: inputs 7, 3, 6, 14 should output yes. Inputting 21, 42 should output no.*/
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    if(a%7 || a%3){
        printf("Yes");
    }
    else{
        printf("No");
    }

}
