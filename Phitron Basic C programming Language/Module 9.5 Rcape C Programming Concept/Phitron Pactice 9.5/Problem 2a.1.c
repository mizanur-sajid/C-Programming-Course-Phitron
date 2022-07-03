//100 + 97 + 94 + 91 + ….  (0 এর চেয়ে বড় পর্যন্ত)
#include<stdio.h>
int main()
{
    int i=100;
    int sum = 0;

    while(i>0){
        sum= sum+i;
        i--;
        printf("%d\n",i+1);
    }
    printf("Sum: %d", sum);
}
