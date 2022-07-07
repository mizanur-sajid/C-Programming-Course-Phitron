#include<stdio.h>

int main()
{
    char strin[1000];
    gets(strin);
    char text;
    scanf("%c",&text);// input.
    int i=0;
    while(strin[i]!='\0'){
    if(strin[i]==text){
    printf("Fount at %d\n",i+1); // Index 0=1
    }
    i++;
    if(strin[i]==NULL) break;
    }
    return 0;
}
