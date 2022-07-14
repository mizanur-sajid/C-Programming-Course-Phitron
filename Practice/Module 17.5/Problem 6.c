#include<stdio.h>
#include<math.h>
void truncate(char str[], int k){
    int len = strlen(str);
    if(k<0 || k>len)    return;
    else                str[k]= '\0';
}
int main(){
    char str[101];
    scanf("%s",&str);
    int k;
    scanf("%d",&k);
    truncate(str,k);
    printf("%s",str);

    //printf("%s",turncat);
    return 0;
}
