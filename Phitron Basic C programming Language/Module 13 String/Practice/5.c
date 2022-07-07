#include<stdio.h>
int main()
{
    char st[100]="This is w3resource.com";
    printf("%s",st);

    int wrd,i;

    i=0;
    wrd=1;

    while(st[i]!='\0'){
        if(st[i] ==  ' ' || st[i] == '\n' || st[i] == '\t')
        {
            wrd++;
        }
        i++;
    }
   printf("Total number of words in the string is : %d\n", wrd);

}
