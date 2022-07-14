/*Write a function that takes as input a number and outputs its square.*/
#include<stdio.h>
void makesquare(int k){
    int ans;
    ans = k*k;
    printf("%d",ans); //if i use return function int type, i can also print from main function.
}
int main()
{
    int n;
    scanf("%d",&n); //int and double type variable, pass by value and array will pass by return.
    makesquare(n);//Using void type function that's why it will not return anything.

    return 0;
}
