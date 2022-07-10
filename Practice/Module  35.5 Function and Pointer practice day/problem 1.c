#include<stdio.h>
int get_max(int x,int y)
{
    if(x > y)   return x;
    else        return y;
}

int main()
{
    int x=30;
    int y=20;
    int n = get_max(x,y);
    printf("%d",n);
}
