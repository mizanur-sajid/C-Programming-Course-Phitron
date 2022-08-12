#include<stdio.h>
#include<string.h>
int main()
{
    int n,last_digit,sum = 0;
    scanf("%d",&n);
    while(n >0){
        last_digit = n%10;
        sum = sum+last_digit;
        n = n/10;
    }
    //sum = sum+last_digit;
    printf("%d",sum);
}
