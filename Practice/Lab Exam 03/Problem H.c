#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num,test;
    scanf("%d %d",&num,&test);

    int *arr = malloc(sizeof(int) * num);
    for(int i = 0; i < num; i++)
    {
       scanf("%d",&arr[i]);
    }

    int *arr2 = malloc(sizeof(int) * num);
    int flag=0;

    for(int i=test; i<num; i++)
    {
        arr2[flag] = arr[i];
        flag++;
    }

    for(int i=0; i<test; i++)
    {
        arr2[flag] = arr[i];
        flag++;
    }

    for(int i=0; i<num; i++)
    {
        printf("%d ",arr2[i]);
    }

    return 0;
}

