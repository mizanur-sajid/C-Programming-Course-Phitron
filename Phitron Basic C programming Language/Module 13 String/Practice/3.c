#include<stdio.h>
int main()
{
    char a[50];
    printf("Input the string: ");
    fgets(a,50,stdin);
    printf("The character of the string are: \n");

    int num=0;
    while (a[num]!=0){
       printf("%c ",a[num]);
       num++;
    }
    printf("\n");



}
