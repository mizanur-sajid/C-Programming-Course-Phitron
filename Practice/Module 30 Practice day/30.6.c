/**
Take your name as input and add “Phitron Member “ at first.

For example:
Input:
Rahat
Output:
Phitron Member Rahat
**/
#include<stdio.h>
int main()
{
    char str[20];
    gets(str);
    char str2[] = "Phitron Member";
    printf("%s %s ",str2, str);
}
