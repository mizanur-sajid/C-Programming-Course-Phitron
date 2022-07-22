/**Use the right shift operator to find the minimum number of bits to represent an integer.
For example 10 has binary representation “1010”. So, it takes 4 bits.
Hint: Keep shifting right until you get 0.
**/
#include<stdio.h>
int main()
{
    int num=1010;

    for(int i=0;i<=10;i++){
        printf("Right shift by %d: %d\n",i,num>>i);
    }
}

