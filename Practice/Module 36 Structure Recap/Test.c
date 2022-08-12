#include<stdio.h>

typedef struct squreRoot{
    int number[100];
    double root[100];
}squreRoot;

int main()
{
    squreRoot squreRoot1;

    for(int i=0;i<100;i++){

        squreRoot1.number[i]=i;
        squreRoot1.root[i]=sqrt(i);
    }
    for(int i=0;i<100;i++){
        printf("SqureRoot of %d\n",squreRoot1.number[i]);
        printf("is: %f\n",squreRoot1.root[i]);
    }
    return 0;
}
