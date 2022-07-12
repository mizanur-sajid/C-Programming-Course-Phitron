/*Write a C program to check whether an alphabet is a vowel or consonant.*/
#include<stdio.h>
int main()
{
    char n;
    scanf("%c", &n);

    if(n == 'a' || n == 'e'|| n == 'i' || n =='o' || n =='u'){
        printf("vowel\n");
    }else{
        printf("consonant\n");
    }
    return 0;
}
