#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int c = a+b;
    if( c<10){
        printf("%d",c);
    }
    if(c>=10)
    {
        printf("error\n");
    }
}
