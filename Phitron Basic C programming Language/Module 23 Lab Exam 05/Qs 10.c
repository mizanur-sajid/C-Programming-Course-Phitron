#include<stdio.h>
int main()
{

 char text[100];
    gets(text);
    char pattern;
    scanf("%c",&pattern);
    char * cur = text;

    while(cur){
        char *pos = strchr(cur,pattern);
        if(pos==NULL)       break;
        printf("Found at %d\n",pos-text);
        cur = pos+1;
        }

}