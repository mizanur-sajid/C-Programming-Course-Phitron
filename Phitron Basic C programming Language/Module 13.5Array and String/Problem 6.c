#include<stdio.h>
int main()
{
    int arr[100],i,n,fr[100];
    printf("Input the size of array: ");
    scanf("%d",&n);
    printf("Input the %d elements of array: \n",n);
    for(i=0;i<n;i++){
        printf("elements - %d: ",i);
        scanf("%d", &arr[i]);
        fr[i] = -1; //fr[i] initialize by -1.
    }
    for(i=0;i<n;i++){ //outer loop
        int count =1; //initialize count by 1.
        for(int j=i+1;j<n;j++){ //inner loop
            if(arr[i] == arr[j]){ //find out the duplicate value
                count++;
                fr[j]=0; //make sure fr[j] will not count the same value
            }
        }
        //if fr of current element is not counted
        if(fr[i] !=0){
            fr[i] = count;
        }
    }
    printf("\nFrequency of all elements of array: \n");
    for(i=0;i<n;i++)
    {
        if(fr[i] !=0){
            printf("%d occurs %d times \n", arr[i], fr[i]);
        }
    }

}
