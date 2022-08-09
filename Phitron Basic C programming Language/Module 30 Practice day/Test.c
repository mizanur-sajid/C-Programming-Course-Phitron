#include<stdio.h>
int main()
{
    int arr[5]={};
    int res=sizeof(arr)/sizeof(arr[2]);
    int x = strrev(res);
    printf("%d ",strrev(x));
}
