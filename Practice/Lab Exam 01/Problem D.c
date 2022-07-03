#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    float sum=0;
    for(int i=1;i<=n;i++){
        float a,b;
        scanf("%f %f",&a,&b);

        float multiplies = a * b;
        sum +=multiplies;
    }
    printf("%.3f\n", sum);
}
