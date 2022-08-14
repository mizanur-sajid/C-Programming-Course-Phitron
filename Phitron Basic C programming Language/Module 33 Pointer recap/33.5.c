#include<stdio.h>
int change(int *ptr,int x){
    //*ptr=-100;
    //printf("%d\n",*(ptr+1));
    *(ptr+2)=1000;
    x=5000;
}

int main(){
    int a[3]={10,20,30};
    int k=10;
    change(a,k);
    printf("%d %d %d\n",a[0],a[1],a[2]);
    printf("%d\n",k);
    return 0;
}
