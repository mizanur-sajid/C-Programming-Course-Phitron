#include<stdio.h>
#include<string.h>
int findXOR(int l, int r){
    int ans=0;
    for(int i=l;i<=r;i++){
        ans=ans^i;
    }
    return ans;
}
int main()
{
    int l, r;
    scanf("%d %d",&l,&r);
    int a = findXOR(l,r);
    printf("%d",a);
}
