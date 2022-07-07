#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "hello";
//    char str2[10];
//
//    int len = strlen(str);
//    for(int i=0;i<len;i++){
//        str2[i] = str[i];
//    }
//    str2[len] = '\0';
//
//    printf("%s ", str2);
    char str2[10];
    strcpy(str2,str);
    printf("%s",str2);
}
