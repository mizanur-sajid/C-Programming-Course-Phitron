#include<stdio.h>

int main()
{
    int a=10;
    printf("Address -> %p Value-> %d\n",&a,a);
    int *p = &a;
    printf("Address-> %p Value-> %p\n",&p,p);
    return 0;
}
