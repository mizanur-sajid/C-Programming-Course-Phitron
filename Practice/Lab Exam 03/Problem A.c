#include<stdio.h>
int main()
{
    int i,e,k=0,a,q=0;
    char s[100];
    scanf("%s",&s);
    a=strlen(s);
    for(int j=0;j<a;j++){
        for(int i=j+1;i<a;i++){
            if(s[j]==s[i]){
                s[j]='0';
            }
        }
    } for(i=0;i<a;i++){
        if(s[i]!='0'){
            q++;
        }
    }
    if((q%2)==0){
        printf("CHAT WITH HER!");
    }
    else{
        printf("IGNORE HIM!");
    }
}
