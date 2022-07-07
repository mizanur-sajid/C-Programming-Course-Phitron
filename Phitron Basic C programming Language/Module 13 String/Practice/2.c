#include<stdio.h>
int main()
{
    char a[50];
    printf("Input the string: ");
    gets(a);

    int idx=0;
    while (a[idx] !='\0'){
        idx++;
    }
    printf("Length: %d\n",idx);
}


