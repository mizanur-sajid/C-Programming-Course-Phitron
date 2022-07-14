#include<stdio.h>

void leftRotateOne(int arr[],int n){
    int temp = arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    arr[n-1] = temp;
    }
}
void leftRotate(int arr[],int k, int n){
    for(int i=0;i<k;i++);
            leftRotateOne(arr,n);
}


int main()
{
    int arr[]={10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=1;
    leftRotate(arr,k,n);

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
