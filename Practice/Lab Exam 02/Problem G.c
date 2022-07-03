#include<stdio.h>
int main(){
    int a,b,num=0;;
    scanf("%d %d",&a,&b);

    for(int i=a;i<=b;i++){
        num++;
    }
    printf("%d",num);
    return 0;
}

