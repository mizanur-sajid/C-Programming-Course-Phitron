#include<stdio.h>
#define N 5
int main()
{
    int a[N], i, *p;
    for(i = 0; i < N; i++)
        scanf("%d", &a[i]);

    p = &a[N - 1];
    for(i = 0; i < N; i++)
        printf("%d\n", *p--);
    return 0;
}

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    //Calculate length of array arr
    int length = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    //Loop through the array in reverse order
    for (int i = length-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}
