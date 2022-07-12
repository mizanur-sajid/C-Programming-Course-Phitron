#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    char cal[5];
    while(n--)
    {
        scanf("%s",cal);
        count+=cal[1]=='+'?1:-1;
    }
    printf("%d",count);
    return 0;
}
