#include<stdio.h>
int sumF(int n){
    if(n == 0) return 1;
    else return (n * sumF (n-1));
}


int main()
{
    int n,result;
    scanf("%d",&n);
    result = sumF(n);
    printf("Factorial  of n numbers: %d",result);
}
