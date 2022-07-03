#include<stdio.h>
int main()
{
    int n,x,y,count=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&x,&y);
    if((y-x)>1){
            count++;
        }

    }
    printf("%d",count);
    return 0;

}


