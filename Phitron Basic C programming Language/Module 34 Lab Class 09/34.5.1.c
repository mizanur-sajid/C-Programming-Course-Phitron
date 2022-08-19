#include<stdio.h>
#include<stdbool.h>
void sorted(int *arr,int n){
    for(int pos=0;pos<n-1;pos++){
        for(int check=pos+1;check<n;check++){
            if(arr[check]<arr[pos])
            {
                int temp=arr[check];
                    arr[check]=arr[pos];
                    arr[pos]=temp;
            }
        }
    }
}
void copy(int *arr,int *b,int n){
    for(int i=0;i<n;i++){
        b[i]=arr[i];
    }
}
bool is_sorted(int *arr,int n)
{
    int b[n];
    copy(arr,b,n);
    sorted(b,n);
    for(int i=0;i<n;i++){
        if(arr[i] != b[i]){
            return false;
        }
    }
    return true;

}
int main()
{
    int arr[6]={10,20,30,40,50,60};
    bool ans = is_sorted(arr,6);
    if(ans)
    {
        printf("Yes, sorted\n");
    }
    else
    {
        printf("No\n");
    }
}
