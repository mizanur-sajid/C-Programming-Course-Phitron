#include<stdio.h>
#include<stdbool.h>
void sort(int *a,int n){
    for(int pos=0;pos<n-1;pos++){
        for(int check=pos+1;check<n;check++){
            if(a[check]<a[pos]){
                int temp = a[check];
                a[check] = a[pos];
                a[pos] = temp;
            }
        }
    }
}
void array_copy(int *a,int *b,int n){
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
}
bool is_sorted(int *a,int n){
    int b[n];
    array_copy(a,b,n);
    sort(b,n);
    for(int i=0;i<n;i++){
        if(a[i]!=b[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[6]={2,5,10,80,90,100};
    bool ans = is_sorted(arr,6);
    if(ans){
        printf("Yes, sorted\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}



