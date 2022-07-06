#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int Max=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        //printf("arr[%d] = %d   Max= %d\n",i,arr[i],Max);
        if(arr[i] > Max) {
            Max = arr[i];
        }
        //printf("arr[%d] = %d   Max= %d\n",i,arr[i],Max);
    }
    //printf("Maximum value of array-> %d\n",Max);

    int sum = 0;
    for(int j=0;j<n;j++){
        sum = sum +(Max - arr[j]);
    }
    printf("%d",sum);
}
