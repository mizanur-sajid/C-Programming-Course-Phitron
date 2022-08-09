/**
Write a C code which takes an array of size N as input and do the following:
Make reverse of that array and print the differences between every value of the original and reversed array.

For example:
Input:
5
1 4 6 2 7
Output:
6 2 0 2 6
**/
#include<stdio.h>
#include<string.h>
int main()
{
   char str[5] = {1,4,6,2,7};
   for(int i=5-1;i>=0;i--){
        int val = str[5-i-1] - str[i];
        if(val<0)
        {
            val = -val;
        }
        printf("%d ",val);
   }
   return 0;
}

