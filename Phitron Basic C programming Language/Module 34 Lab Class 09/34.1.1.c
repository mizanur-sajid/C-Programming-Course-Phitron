#include<stdio.h>
void reverse(int a[],int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    int arr[]={10,20,30,40,50,60};
    reverse(arr,6);
    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
