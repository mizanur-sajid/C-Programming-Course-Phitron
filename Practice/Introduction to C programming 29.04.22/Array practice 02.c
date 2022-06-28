#include <stdio.h>
int main()
{
    int sum = 0;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < 10; i++)
    {
        printf("Arr: [%d]=%d\n", i, arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum of array: %d\n", sum);
    printf("Size of array: %d\n", sz);
}
