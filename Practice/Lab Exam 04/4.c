/*void makeSum(int a, int b, int *sum)
The above function takes as input two integers a and b and stores their sum in the variable sum. Implement the function.*/
#include<stdio.h>
void makeSum(int a, int b, int *sum){
    a,b;
    scanf("%d %d", &a, &b);
    *sum = a + b;
}

//int main()
//{
//    int x,y;
//    scanf("%d %d",&x,&y);
//
//    makeSum(&x,&y);
//
//}
