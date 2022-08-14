#include<stdio.h>
void send (int *ptr,int *ptr2){

    *ptr=100;
    *ptr2=200;
}

int main(){
    int x,y;
    send(&x,&y);
    printf("%d %d\n",x,y);
    return 0;
}
