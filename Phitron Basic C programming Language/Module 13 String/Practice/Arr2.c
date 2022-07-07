#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int fibonnicci[n];

    fibonnicci [0] = 0;
    fibonnicci [1] = 1;

    for(int i=2;i<n;i++){
        fibonnicci[i] = fibonnicci[i-1] + fibonnicci[i-2];
    }
    for(int i=0;i<n;i++){
        printf("%d\n",fibonnicci[i]);
    }
}
