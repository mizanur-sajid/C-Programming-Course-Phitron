#include<stdio.h>
#include<stdlib.h>
int * makeCopy(int n,int input[]){
    int *output=(int*)malloc(n*4);
    for(int i=0;i<n;i++){
        output[i] = input[i];
    }
    return output;
}
int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int *b = makeCopy(n,a);
    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }
}
