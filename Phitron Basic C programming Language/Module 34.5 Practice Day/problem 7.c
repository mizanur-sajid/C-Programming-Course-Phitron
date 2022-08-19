#include<stdio.h>
void set_min_max(int *x,int *y){

    int temp = *y;
        *y = *x;
        *x = temp;
}

int main(){
    int num1=10;
    int num2=20;
    set_min_max(&num1,&num2);
    printf("%d %d\n",num1,num2);
    return 0;
}
