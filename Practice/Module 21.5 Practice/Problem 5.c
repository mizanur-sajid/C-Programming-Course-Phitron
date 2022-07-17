#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    int *a = (int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int prod=1;

    for(int i=0;i<n;i++){
        prod = prod * a[i];
    }
    printf("%d",prod);
}
