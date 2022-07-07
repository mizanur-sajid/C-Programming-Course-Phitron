#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int fibonicci[n];

    fibonicci[0] = 0;
    fibonicci[1] = 1;
    for(int i=2; i<n; i++){
        fibonicci[i] = fibonicci[i-1] + fibonicci[i-2];//calculation of fibonicci number.
                                                      // two index of before 'i' are (i-1) and (i-2)
    }
    for(int i=0;i<n;i++){
        printf("%d -> %d\n",i, fibonicci[i]);
    }
}
