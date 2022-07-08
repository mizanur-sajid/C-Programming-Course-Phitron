#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[1000];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int sum=0;
    for(int i=0;i<n;i++){
        //printf("%d ",arr[i]);
        sum = sum + arr[i];
        //i++;
    }
    printf("%d\n",sum);
    return 0;
}
