#include<stdio.h>

int primenum(int x);

int main()
{
    int n;
    scanf("%d",&n);
    primenum(n);
}

int primenum(int x){
    int  count=0;
    for(int i=2;i<=x/2;i++){
        if(x%i==0){
            count++;
            break;
        }
    }
    if(count==0 && x!=1){
        printf("%d is a prime number.",x);
    }
    else{
        printf("%d is not a prime number.",x);
    }
}
