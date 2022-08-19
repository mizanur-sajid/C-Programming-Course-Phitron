#include<stdio.h>
void array_delete(int *arr,int n,int pos){
    for(int i=pos+1;i<n;i++){
        arr[i-1] = arr[i];
    }
}
int main()
{
    int arr[6]={10,20,30,40,50,60};
    int pos;
    scanf("%d",&pos);
    array_delete(arr,6,pos);
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
}
