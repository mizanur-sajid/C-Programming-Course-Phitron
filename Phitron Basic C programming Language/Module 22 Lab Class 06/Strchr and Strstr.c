#include<stdio.h>
int main()
{
//    char n[]="Hello";
//
//    char * pos = strchr(n, 'o');
//    if(!pos){
//        printf("Not found\n");
//    }
//    else
//    {
//        printf("Found %d",pos - n);
//    }

    char text[100], pattern[100];
    gets(text);
    gets(pattern);

    char *pos=strstr(text,pattern);
    if(!pos){
        printf("Not found");
    }
    else{
        printf("Found %d",pos - text);
    }


//    char text[100];
//    gets(text);
//    char pattern;
//    scanf("%c",&pattern);
//    char * cur = text;
//
//    while(cur){
//        char *pos = strchr(cur,pattern);
//        if(pos==NULL)       break;
//        printf("Found at %d\n",pos-text);
//        cur = pos+1;
//        }

}
