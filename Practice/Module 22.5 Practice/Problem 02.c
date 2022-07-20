//For example, if in = {1, -2, -3, 4, 5}.
//Then the function should return 2 and out should be {-2, -3}.
#include<stdio.h>
#include<stdlib.h>
void findNegative(int n,int in[], int out[]){
    int z = 0;
    for(int i=0;i<n;i++){
        if(in[i] < 0){
            out[z]= in[i];
            z++;
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b[1000]={0};
    findNegative(n,a,b);
    for(int i=0;i<n;i++){
        if(b[i]!= 0){
            printf("%d ",b[i]);
        }

    }
}

