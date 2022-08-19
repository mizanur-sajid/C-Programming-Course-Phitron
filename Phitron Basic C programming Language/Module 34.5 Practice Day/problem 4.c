#include<stdio.h>
#include<string.h>

void string_copy(char *s1, char *s2){
    while(*s1){
        *s2=*s1;
        s1++;
        s2++;
    }
    *s2='\0';
}

int main()
{
    char s1 [100]= "my_country";
    char s2[100];
    string_copy(s1,s2);
    printf("%s\n",s2);
    return 0;
}
