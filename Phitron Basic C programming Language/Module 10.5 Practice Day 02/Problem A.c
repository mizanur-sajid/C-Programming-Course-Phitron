#include<stdio.h>
int main()
{
    int n,n2,num;
    scanf("%d %d",&n,&n2);

    num = n - (n2*2);

    if(num>0){
        printf("%d",num);
    }
    else{
        printf("0\n");
    }
}
