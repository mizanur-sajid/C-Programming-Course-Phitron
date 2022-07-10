#include<stdio.h>
void printGCD(int x, int y){
    printf("X= %d Y= %d\n",x,y);
    while(y > 0){
        int temp = x%y;
            x = y;
            y = temp;
    }
    int GCD = x;
    printf("gcd= %d",GCD);
}



 int main()
 {
     int m,n;
     scanf("%d %d",&m,&n);

     printGCD(m,n);
 }
