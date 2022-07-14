#include<stdio.h>
#include<math.h>
int Gcd(int a, int b){
    int temp;
    while(b!=0){
        temp = a%b;
        a = b;
        b = temp;
    }
    int gcd = a;
    return gcd;
}
int findgcd(int n, int ar[n]){
    int ans = ar[0];
    for(int i=1;i<n;i++){
        ans = Gcd(ans, ar[i]);
    }
    return ans;
}
int main()
{
    int arr[10];
    int sz = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<sz;i++){
        scanf("%d",&arr[i]);
    }
    int gcdans = findgcd(arr,sz);
    printf("%d",gcdans);
    return 0;
}
