#include<stdio.h>
void maxNum(int arr[]){
    for(int i=0;i<5;i++){
        //printf("%d\n",arr[i]);
        if(arr[0] < arr[i]){
            arr[0] = arr[i];
        }
    }
    printf("The largest num is: %d",arr[0]);
}
int main(){
    int arr[5]={10,5,6,7,99};
    maxNum(arr);
}
