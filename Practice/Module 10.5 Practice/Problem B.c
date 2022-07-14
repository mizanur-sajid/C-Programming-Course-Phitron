#include<stdio.h>
int main()
{
    long long int N,X,Y;
    scanf("%lld",&N);

    X = -pow(2,31);
    Y = pow(2,31) -1;

    if(N >= X && N <= Y){
        printf("Yes\n");
    }else{
          printf("No");
    }

}
