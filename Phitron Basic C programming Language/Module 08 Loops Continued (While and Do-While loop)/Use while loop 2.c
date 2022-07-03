//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//
//    int sum=0;
//    while(n>0){
//        int digit = n%10;
//        n/=10;
//        sum += digit;
//        printf("Digit = %d, X = %d\n",digit,n);
//    }
//    printf("Digit sum= %d\n",sum);
//}

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int reversed = 0;
    while(n>0){
        int digit = n%10;
        n/=10;
        reversed = reversed*10+digit;
    }
    printf("Reversed = %d", reversed);
}




