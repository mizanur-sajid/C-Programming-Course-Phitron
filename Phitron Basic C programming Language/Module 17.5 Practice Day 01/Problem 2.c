#include<stdio.h>
void are_of_rectangle(int x, int y){
    int area = x * y;
    printf("%d",area);
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    are_of_rectangle(a,b);
}

