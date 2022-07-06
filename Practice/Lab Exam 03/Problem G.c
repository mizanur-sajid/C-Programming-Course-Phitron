#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    while(n--){
        char b[105];
        scanf("%s",&b);

        for(int i=0;i<strlen(b) - 1; i+=2){
            printf("%c",b[i]);
        }
        printf("%c\n",b[strlen(b) - 1]);
    }
    return 0;
}
