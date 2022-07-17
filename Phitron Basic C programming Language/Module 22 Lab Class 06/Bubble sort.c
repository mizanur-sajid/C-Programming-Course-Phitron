#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
        *a = *b;
        *b = temp;
}
void sort(int n, int arr[]){
    for(int steps=0;steps<n;steps++){
        for(int i=0; i+1<n;i++){
            if(arr[i]>arr[i+1]) {
                swap(&arr[i], &arr[i+1]);
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(n,arr);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

