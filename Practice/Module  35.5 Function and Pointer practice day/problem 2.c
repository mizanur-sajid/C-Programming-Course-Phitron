#include<stdio.h>
int get_min(int x,int y)
{
    if(x < y)   return x;
    else        return y;
}

int main()
{
    int x=50;
    int y=20;
    int n = get_min(x,y);
    printf("%d",n);
}

