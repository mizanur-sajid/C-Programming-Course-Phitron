/* Find the output of the following code.*/
#include<stdio.h>
int main(){
    int a = 10;int b = 20;int *p = &a;

    printf("%d %d %d\n", a, b, *p); //output: 10 20 10

    *p = 30;

    printf("%d %d %d\n", a, b, *p); //output: 30 20 30

    *p = 20;

    a = 50;

    b = 10;

    printf("%d %d %d\n", a, b, *p); //output: 50 10 50

    p = &b;

    printf("%d %d %d\n", a, b, *p); //output: 50 10 10

    a = 20;

    b = 100;

    printf("%d %d %d\n", a, b, *p); //output: 20 100 100
    return 0;
}
