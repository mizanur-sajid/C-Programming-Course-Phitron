#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int a[26]={0};
    gets(s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='a' && s[i]<='z'){
            a[s[i]-'a']++;
        }
    }
    int counter = 0;
    for(int i=0;i<26;i++){
        if(a[i] != 0){
            counter++;
        }
    }
    printf("%d\n",counter);
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int a[26]={0};
    gets(s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='a' && s[i]<='z'){
            a[s[i]-'a']++;
        }
    }
    int counter = 0;
    for(int i=0;i<26;i++){
        if(a[i] != 0){
            counter++;
        }
    }
    printf("%d\n",counter);
    return 0;
}
