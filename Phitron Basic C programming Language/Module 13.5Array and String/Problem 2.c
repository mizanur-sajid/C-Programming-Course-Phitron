//Write a C program to read elements in an array and find the sum of array elements.
//input 10,20,30,40,50;
//output 150;
#include<stdio.h>
int main()
{
    //Initialization array
    int arr[5]={10,20,30,40,50};

    //declare sum variable
    int sum=0;
    //run loop
    for(int i=0;i<5;i++){
        sum += arr[i];
    }
    printf("Sum of all elements = %d\n",sum);
}
