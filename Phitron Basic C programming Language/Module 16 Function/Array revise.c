#include<stdio.h>
void fun(int *p){
    *p=1000;
}

int main()
{
    int a=10;
    int *p=&a;
    fun(p);
    printf("%d\n",a);
}
