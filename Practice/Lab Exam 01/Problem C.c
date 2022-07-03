#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t=0;
    for(int i=1;i<=n;i++){
        int total;
        scanf("%d",&total);
        if(total<0){
            t++;
        }
    }
    printf("%d\n",t);
}
