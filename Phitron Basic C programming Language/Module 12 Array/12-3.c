#include<stdio.h>
int main()
{
    char word[] = {'h','e','l','l','o'};

    int sz = sizeof(word)/sizeof(word[0]);
    for(int i=0;i<sz;i++){
        putchar(word[i]);
    }
}
