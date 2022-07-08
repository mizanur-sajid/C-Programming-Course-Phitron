//Write a C program to read elements in an array and find the maximum of array elements. Also find how many times the maximum occurs.
//Input: 10,20,30,40,50,50,40;
//Output: Maximum occurs 2 times.
#include<stdio.h>
int main()
{
    int arr[20]={10,20,50,40,30,50,40};

    // Initialize maximum element
    //and count for how many max. exist
    int max=arr[0];
    int count = 0;

    //compare every element with current max
    //when max will find increase count value.
    for(int i=0;i<20;i++){
        if(arr[i]>max){
            max = arr[i];
            count++;
        }

    }
    printf("%d %d",max, count);
}
