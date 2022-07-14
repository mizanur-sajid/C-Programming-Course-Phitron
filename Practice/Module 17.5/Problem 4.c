#include<stdio.h>
void Rotate(int arr[],int n){
    int temp = arr[0],i;
    for(i=0;i<n-1;i++){
        arr[i] = arr[i+1];
    arr[n-1]=temp;
    }
}
void leftRotate(int arr[],int n,int k){
    for(int i=0;i<k;i++){
        leftRotate(arr,n);
    }
}


int main(){
    int a[]={1,2,3,4,5};
    int n = sizeof(a)/sizeof (a[0]);

    int k=1;
    leftRotate(a,k,n);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
