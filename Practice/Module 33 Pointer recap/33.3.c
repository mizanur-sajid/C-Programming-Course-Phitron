#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};

    for(int i=0;i<5;i++){
        printf("%d ",*(arr+i));
    }
    //printf("%d",arr[2]);
    return 0;
}
