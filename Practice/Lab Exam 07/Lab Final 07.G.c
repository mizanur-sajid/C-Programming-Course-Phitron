#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10]="heidi";
    char s2[1001];
    scanf("%s",s2);
    int temp=0,idx=0;
    for(int i=0;s2[i]!='\0';i++){
        if(s2[i]==s1[idx]){
            temp++;
            idx++;
        }
    }
    printf((temp >= 5) ? "YES\n" : "NO\n");
    return 0;
}
