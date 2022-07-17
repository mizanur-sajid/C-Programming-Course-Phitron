#include<stdio.h>

int min(int a, int b){
    return a < b ? a : b;
}
void swap(int *a, int *b){
    int temp = *a;
        *a = *b;
        *b = temp;
}
void sort(int n, int arr[]){
    for(int steps=0;steps<n;steps++){
        int minelements = arr[steps], pos = steps;
        for(int i=steps;i<n;i++){
               //minelements = min(minelements, arr[i]);
                if(arr[i] < minelements){
                    minelements = arr[i];
                    pos = i;
                }
        }
        swap(&arr[steps], &arr[pos]);
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
