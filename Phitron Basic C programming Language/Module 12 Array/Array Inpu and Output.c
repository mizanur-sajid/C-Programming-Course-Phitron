//Program to take 5 values from the user and store them in an array.
//print the elements stored in the array.

#include<stdio.h>
int main()
{
    int values[5];
    printf("Enter 5 integer: ");

    for(int i=0;i<5;i++){
        scanf("%d", &values[i]);
    }

    for(int i=0;i<5;i++){
        printf("%d\n",values[i]);
    }
}
