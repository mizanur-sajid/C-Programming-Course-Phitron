#include<stdio.h>
int main()
{
    int S,T,X;
    scanf("%d%d%d",&S,&T,&X);

    if(X==S){
        printf("Yes");
    }
    else if(S>T && S<X){
        printf("Yes");
    }
    else if(T>X){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}
