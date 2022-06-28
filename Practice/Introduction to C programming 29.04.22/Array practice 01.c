#include <stdio.h>
int main()
{
    int n, sum = 0, num[100];
    printf("Enter the number of array: ");
    scanf("%d", &n);

    printf("Enter the %d number: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        // printf("%d ",num[i]);
        sum = sum + num[i];
    }
    printf("%d", sum);
}
