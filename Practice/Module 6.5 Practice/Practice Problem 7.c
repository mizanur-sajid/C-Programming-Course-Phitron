/*Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
Test Data :
50 50 60
Expected Output :
This is an isosceles triangle.
*/
#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);

    if(A == B && B == C){
        printf("This is an equilateral triangle.\n");
    }
    else if(A == B || B == C || C == A){
        printf("This is an isosceles triangle.\n");
    }
    else{
        printf("This is a scalene triangle.\n");
    }
    return 0;
}
