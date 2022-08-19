#include<stdio.h>
void insert(int *a,int n,int pos,int val)
{
    for(int i=n-2;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos] = a[val];
}

int main(){
    int arr[7]={10,20,30,40,50,60};
    int pos,val;
    scanf("%d %d",&pos,&val);
    insert(arr,7,pos,val);
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
    }
}
