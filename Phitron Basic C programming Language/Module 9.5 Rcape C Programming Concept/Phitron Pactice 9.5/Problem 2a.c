/* নিচের ধারা গুলোর যোগফল বের করার প্রোগ্রাম লিখ।
1. 1+2+3+.....100
*/
//#include<stdio.h>
//int main()
//{
//    int i = 1;
//    int sum = 0;
//    while( i <= 100){
//        sum = sum + i;
//        i++;
//        printf("Add %d: New sum = %d\n", i-1, sum);
//    }
//    printf("Sum: %d",sum);

//}
/*
2. 1+3+5+....+29
#include<stdio.h>
int main()
{
    int i=1;
    int sum=0;
    while(i<=29){
        sum=sum+i;
        i +=2;
        printf("Add %d: New sum = %d\n",i-2,sum);
    }
    printf("Sum: %d",sum);
    return 0;
}
*/

/*50 + 49 + 48 + 47 + …… ( প্রথম ২০টি পদ)

#include<stdio.h>
int main()
{
    int i=50;
    int j=30;
    int sum = 0;

    while(i>=j){
        sum = sum+i;
        i--;
        printf("%d\n",i+1);
    }
    printf("Sum: %d",sum);
}
*/

2 + 5 + 8 + 11 + 14 + …..   (প্রথম ১০টি পদ)
#include<stdio.h>
int main()
{
    int i = 2;
    int j = 29;
    int sum = 0;
    while(i<=j){
        sum = sum+i;
        i+=3;
        printf("%d\n",i-3);
    }
    printf("Sum: %d\n",sum);
}























