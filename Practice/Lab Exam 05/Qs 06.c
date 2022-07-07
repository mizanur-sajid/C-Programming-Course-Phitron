#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool is_reverse_sorted(int n, int a[]){
    for(int i=0;i<n;i++){
        if(a[i]>a[i+1]){
            return false;
        }
    }
    return true;
}
void swap(int *a, int *b){
    int temp = *a;
        *a = *b;
        *b = temp;
}
void sort(int n,int a[]){
    for(int steps=0;steps<n;steps++){
        for(int i=n-1;i>0;i--){
            if(a[i-1]<a[i]){
                swap(&a[i-1],&a[i]);
                printf("Swap %d %d\n",i, i+1);
                for(int i =0;i<n;i++)
                {
                    printf("%d ",a[i]);
                }
                printf("\n");
            }
        }
        if(is_reverse_sorted(n,a))   break;
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
        printf("%d ",is_reverse_sorted(n,a));
    }
}
