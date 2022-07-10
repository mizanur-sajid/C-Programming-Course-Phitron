#include<stdio.h>
void swaping(int *s1, int *s2){
    int result;
    result = *s1;
    *s1 = *s2;
    *s2 = result;
}


int main()
{
    int n1,n2;
    printf("Input 1st number: ");
    scanf("%d",&n1);
    printf("Input 2nd number: ");
    scanf("%d",&n2);

    printf("Before swapping: n1 = %d, n2 = %d ",n1,n2);

    swaping(&n1,&n2);

    printf("\nAfter swapping: n1 = %d, n2 = %d \n\n",n1,n2);
}
