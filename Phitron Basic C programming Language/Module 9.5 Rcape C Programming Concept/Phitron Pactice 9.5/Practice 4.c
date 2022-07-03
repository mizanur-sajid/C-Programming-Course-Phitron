#include<stdio.h>
int main()
{
    int a;

    do {
        printf("Enter 0/1: ");
        scanf("%d", &a);

        if(a == 0 || a == 1){
            printf("You entered: %d\n",a);
            break;
        }else{
            printf("Wrong Input. Try Again.\n");
        }
    }while(a!=0 || a!=1);
    return 0;
}
