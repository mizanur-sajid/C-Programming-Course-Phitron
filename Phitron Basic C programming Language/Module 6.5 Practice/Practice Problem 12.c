/*Write a C program to find all roots of a quadratic equation (ax^2 + bx + c = 0). Mention the number of roots and Then list all of them.
Example
Input
Input a: 8
Input b: -4
Input c: -2
Output
There are two roots.
Root1: 0.80
Root2: -0.30
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    float x=(-b/(2*a))+sqrt(b*b-4*a*c)/(2*a);
    float y=(-b/(2*a))-sqrt(b*b-4*a*c)/(2*a);
    if((b*b-4*a*c)<0)
    {
        printf("No roots");
    }
    else if((b*b-4*a*c)==0){
        printf("One root\n");
        printf("Root: %.2f",-b/(2*a));
    }
    else{
        printf("There are two roots\n");
        printf("Root1: %.2f\n",x);
        printf("Root2: %.2f\n",y);
    }
    return 0;

}
