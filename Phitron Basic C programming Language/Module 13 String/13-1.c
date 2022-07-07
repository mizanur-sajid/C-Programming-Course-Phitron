//how to print ASCCI?
//how to find the size of string?
//how to print the full of string?
#include<stdio.h>
int main()
{
    char st[] = "This is a string.";

    int sz = sizeof(st)/sizeof(st[0]);
    printf("%d\n", sz);

    for(int i=0;i<sz;i++){
        printf("%d -> %c (ASCII = %d)\n",i,st[i],st[i]);

        printf("%s",st);
    }
}
