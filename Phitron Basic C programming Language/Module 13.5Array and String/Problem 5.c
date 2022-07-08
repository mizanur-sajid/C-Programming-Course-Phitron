//Write a C program to insert element in array at specified position.
//Input
//Input array elements: 10, 20, 30, 40, 50
//Input element to insert: 25
//Input position where to insert: 3

//Output
//Elements of array are: 10, 20, 25, 30, 40, 50
#include<stdio.h>
int main()
{
    int arr[50],n,t,s,i,x;
    printf("Input the size of array: ");
    scanf("%d",&n);
    printf("Input %d the elements of array: \n",n);
    for(i=0;i<n;i++){
        printf("elements - %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nGiven values are: ");
    for(i=0;i<n;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }
//Input the position
    printf("Input position where to insert: ");
    scanf("%d",&t);
//Input element to insert
    printf("Input element to insert: ");
    scanf("%d",&s);
    n++;
//update the position of
    for(i=n-1;i>=t;i--){
        arr[i] = arr[i-1];
        arr[t-1] = x;
    }
    printf("Element of the array are: ");
    for(i=0;i<n;i++){
        printf("\narr[%d]=%d",i,arr[i]);
    }
    return 0;
}
