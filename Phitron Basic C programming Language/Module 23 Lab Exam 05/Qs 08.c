#include<stdio.h>
#include<stdlib.h>
void swap(int * a, int * b){
    int temp = *a;
        *a = *b;
        *b = temp;
}
void sort(int n,int a[]){
    for(int steps=0;steps<n;steps++){
        int minelements= a[steps],pos=steps;

        for(int i=steps;i<n;i++){
            if(a[i]<minelements){
                minelements=a[i];
                pos=i;
            }
        }
        int count = a[pos];
        a[pos] = a[steps];
        a[steps]=count;
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
    sort(n,a);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
