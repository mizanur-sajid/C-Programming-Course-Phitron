#include<stdio.h>
int main()
{
    printf("Enter your name: ");

    char name[10];
    //scanf("%s", name);
    //gets(name);// For full name or with space.
    fgets(name,10,stdin);//to avoid buffer or system crash.
    printf("Hello, %s\n", name);
}
