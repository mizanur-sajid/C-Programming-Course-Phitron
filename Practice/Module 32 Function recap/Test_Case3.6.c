#include<stdio.h>
int test_case(void)
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
    int test;
    scanf("%d",&test);
    //for(int i=0; i<=test; i++)
    while(test--)
    {
        test_case();
    }
    return 0;
}
