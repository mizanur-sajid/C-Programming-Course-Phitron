#include<stdio.h>
#include<string.h>
int main()
{
    char s2[20] = "BeginnersBook";
    char s1[20] = "BeginnersBook.com";

    int val = strcmp(s1,s2);
        printf("%d",val);
}
