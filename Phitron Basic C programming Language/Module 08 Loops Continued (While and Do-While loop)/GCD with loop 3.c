/*
#include<stdio.h>
int main()
{
   int a,b;
    scanf("%d %d",&a,&b);

    int gcd = 1;
    for(int g=1; g<=a && g<=b;g++){
        if(a%g == 0 && b%g == 0) {
            gcd = g;        }
    }
    printf("%d\n", gcd);
}
*/

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d\n", &a,&b);

    while(a != 0){
        int rem = b%a;
        b = a;
        a = rem;
        printf("%d %d\n",a,b);
    }
    printf("gcd = %d\n", b);
}



