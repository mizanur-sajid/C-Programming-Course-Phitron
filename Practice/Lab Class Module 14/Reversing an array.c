#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    /*int arr2[n]; //less sufficient way
    for(i=0;i<n;i++){
        arr2[n-1-i]=arr[i];
    }
    for(i=0;i<n;i++){
        arr[i]=arr2[i];
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }*/

    // Swap way
    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
