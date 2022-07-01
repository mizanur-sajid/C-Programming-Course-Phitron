/*Write a C program that will first read an integer n, then read n integers. From those, it will find the sum of even integers.
Example:

Enter n: 5
Input 5 integers: 2 3 5 6 7

Sum of even integers = 8
*/
#include<stdio.h>
int main(){
    int n,k;
    printf("Enter n: ");
    scanf("%d",&n);
    int sum=0;
    printf("Enter %d integers : ",n);
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&k); //if we give an space after %d then entering input we have to input more than one input we provide to input
       if (k%2==0)
       {
           sum+=k;
       }

    }
    printf("sum of even integer = %d",sum);
    return 0;
}
