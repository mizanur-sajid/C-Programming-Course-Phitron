#include<stdio.h>
#include<stdlib.h>
int *makeReverse(int n, const int a[]){
    int *rev = (int*)malloc(n*4);
    for(int i=n-1;i>=0;i--){    //if initialize i=n-1 and i--, that's why it will start from end of array index.
        rev[i] = a[i];          //every time it will decreased by 1.
    }
    return rev;
}

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int *b=makeReverse(n,a);  //passing the function parameter using pointer.
    for(int i=n-1;i>=0;i--){ // for getting the function value we need to run this loop.
        printf("%d ",b[i]);  //keep the reverse array index in array, b[i];
    }
}
