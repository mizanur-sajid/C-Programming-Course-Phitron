#include <stdio.h>
int main( )
{
    int n;
    scanf("%d", &n);
    int a,b,c;
    c=n%10;
    n/=10;
    b=n%10;
    n/=10;
    a=n;

    int x=a*100+b*10+c*1;
    int y=b*100+c*10+a*1;
    int z=c*100+a*10+b*1;
    int sum=x+y+z;
    printf("%d",sum);

}
