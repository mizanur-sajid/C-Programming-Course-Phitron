#include<stdio.h>
int f(int n, int a[]) {
     int cnt = 0;
     for (int i=0; i<n; i++) {
         if (a[i] == a[0]) cnt++;
    }
    return cnt;
}

int main()
{
    int n=5;
    int a[5]={1,2,1,2,1};
    int ans = f(5,a);
        printf("%d ",ans);
}

//In this function, we decliared array and array size. If we will not send array size, probably we can lost array size.
