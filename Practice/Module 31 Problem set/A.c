#include<stdio.h>
int main()
{
    int n,p,q;
    scanf("%d",&n);
    int arr[101]={0};
    arr[0]=1;
    scanf("%d",&p);
    int arrp[p];
    for(int i=0;i<p;i++){
        scanf("%d",&arrp[i]);
        arr[arrp[i]]++;
    }
    scanf("%d",&q);
    int arrq[q];
    for(int i=0;i<q;i++){
        scanf("%d",&arrq[i]);
        arr[arrq[i]]++;
    }
    for(int i=0;i<=n;i++){
        if (arr[i] == 0)
        {
            printf("Oh, my keyboard!\n");
            return 0;
        }
    }
    printf("I become the guy.\n");
    return 0;
}
