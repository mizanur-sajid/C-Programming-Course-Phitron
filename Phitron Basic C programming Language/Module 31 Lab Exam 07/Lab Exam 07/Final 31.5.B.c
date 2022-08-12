#include<stdio.h>
#include<string.h>
int main()
{
   int n;
   scanf("%d",&n);
   int str[n];
   for(int i=0;i<n;i++){
    scanf("%d",&str[i]);
   }
//   for(int i=n-1;i>=0;i--)
//        printf("%d\n",str[i]);

    for(int i=0;i<n/2;i++)
    {
        int temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;
    }
    for(int i = 0; i<n;i++){
        printf("%d ",str[i]);
    }
   return 0;
}
