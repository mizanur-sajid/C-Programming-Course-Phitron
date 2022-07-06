#include<stdio.h>
int main()
{
    int N,P,i,count=0;
    scanf("%d %d\n",&N,&P);
    for(i=1;i<=N;i++){
        int score;
        scanf("%d",&score);
        if(score < P)
        count++;
    }
    printf("%d\n",count);
    return 0;
}
