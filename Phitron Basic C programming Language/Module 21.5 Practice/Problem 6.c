#include<stdio.h>
#include<stdlib.h>
void makeCopy(int n, int input[],int output[]){
    for(int i=0;i<n;i++){
            output[i]=input[i];
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b[n];
    makeCopy(n,a,b);

    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }
}

