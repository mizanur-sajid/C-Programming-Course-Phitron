#include<stdio.h>
//int main()
//{
//    int x=10;
//    int *p;
//
//    p = &x;
//
//    printf("%Value of x: %d\n",x);
//
//    *p=20;
//
//    printf("Value of x: %d\n",x);
//    printf("Address of x: %p\n",&x);
//    printf("Value of p: %p\n",p);
//}
void update(int n, char a[]) {
    n++;
    a[0] = '0';
}
int main()
{
    int n = 10;char a[] = "10000";
    update(n, a);
    printf("%d %s", n, a);
}
