#include<stdio.h>
void sort(int *a,int n){
    for(int pos=0;pos<n-1;pos++)
    {
        for(int check=pos+1;check<n;check++){
            if(a[check]<a[pos])
            {
                int temp=a[check];
                a[check]=a[pos];
                a[pos]=temp;
            }
        }
    }
}
int main()
{
    int arr[6]={10,5,60,80,90,100};
    sort(arr,6);
    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
}
