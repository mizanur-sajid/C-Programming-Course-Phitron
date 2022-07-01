/*Write a C program that prints all even numbers between 1 and n (inclusive), where n is taken as input.*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
}
