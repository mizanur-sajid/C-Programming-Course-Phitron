#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);

    if(x>=0 && x<40){
        int sub = 40 - x;
        printf("%d",sub);
    }
    else if(x>=40 && x<70){
        int sub = 70 - x;
        printf("%d",sub);
    }
    else if(x>=70 && x<90){
        int sub = 90 - x;
        printf("%d",sub);
    }
    else {
        printf("expert");
    }
}
