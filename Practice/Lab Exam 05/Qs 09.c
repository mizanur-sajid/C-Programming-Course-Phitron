#include<stdio.h>
#include<string.h>
int main()
{
    char text[100];
    gets(text);
    char pattern;
    scanf("%c",&pattern);
    int i=0;
    while(text[i]!='\0'){
        if(text[i] == pattern){
            printf("Found: %d\n",i);
        }
        i++;
        if(text[i]== NULL)   break;
    }
    return 0;
}
