#include<stdio.h>
int main()
{
    int a=1000;
    int *p=&a;
    int **q=&p;
//    printf("Value->%d Address-> %p\n",a,&a);
//    printf("Value->%p Address-> %p\n",p,&p);
//    printf("Value->%p Address-> %p\n",q,&q);

    **q=-2000;
    printf("%d",a);
    return 0;
}
