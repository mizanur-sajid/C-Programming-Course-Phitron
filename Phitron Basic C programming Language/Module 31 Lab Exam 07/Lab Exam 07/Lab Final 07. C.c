#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    char s[1000];
    scanf("%s",&s);
    char freq[256]={0};
    int n,count=0;
    n = strlen(s);
    char ch = '0';
    for(int i=0;i<10;i++){
        for(int j=0;j<n;j++){
            if(s[j] == ch)
            {
                count++;
            }
        }
        printf("%d ",count);
        count = 0;
        ch++;
    }
    return 0;
}
