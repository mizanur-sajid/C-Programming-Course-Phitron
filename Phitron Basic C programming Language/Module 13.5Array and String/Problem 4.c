//Write a C program to find the second largest element in an array.
//Input array elements: -7 2 3 8 6 6 75 38 3 2
//Second largest = 38
#include<stdio.h>
int main()
{
    int arr[50],n,j=0,large,large2;
    printf("Input the size of array: ");
    scanf("%d",&n);

    printf("Input %d the elements of array: \n",n);
    for(int i=0; i<n;i++){
        printf("elements %d: ",i);
        scanf("%d",&arr[i]);
    }
//Find the largest element of the array
    large =0;
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            large=arr[i];
            j=i;
        }
    }
//find the second largest element of the array and ignore the first one.
    large2=0;
    for(int i=0;i<n;i++){
        if(i==j){
            i++;
            i--;
        }
        else{
            if(arr[i]>large2){
                large2=arr[i];
            }
        }
    }
    printf("The second largest element in the array is: %d\n", large2);
}
