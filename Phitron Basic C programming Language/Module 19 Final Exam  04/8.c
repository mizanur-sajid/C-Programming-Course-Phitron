#include <stdio.h>
#include <string.h>

char stringCat(char a[], char b[], char out[]){
    gets(a);
    gets(b);
    out = strcat(a,b);
    printf("%s",out);
}

int main()
{
    char a[100];
    char b[100];
    char out[1000];
    stringCat(a,b,out);
    return 0;
}

