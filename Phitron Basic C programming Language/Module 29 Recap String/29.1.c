#include<stdio.h>
int main()
{
    char str[6]={"abcde\0"};
    for(int i=0;i<6;i++){
        printf("%c ",str[i]);
    }
    return 0;
}
