#include<stdio.h>
int main()
{
    char str[1000];
    gets(str);

    int a= str[0];

    if(a>=97){
        str[0] -=32;
    }
    printf("%s",str);
}
