#include<stdio.h>
int main()
{
    int N,K,A;
    scanf("%d%d%d",&N,&K,&A);

    if((K+A-1)%N == 0){
        printf("%d",N);
    }
    else{
        printf("%d",(K+A-1)%N);
    }
    return 0;
}
