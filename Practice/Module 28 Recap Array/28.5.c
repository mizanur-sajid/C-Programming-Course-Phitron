#include<stdio.h>
int main()
{
    int arr[6]= {2,1,0,-5,10,5};
    int min = arr[0], max = arr[0];
//    for(int i=1;i<=6;i++){
//        scanf("%d",&arr[i]);
//    }

//    int sum=0;
//    for(int i=0;i<=4;i++){
//        sum +=arr[i];
//    }
//    //printf("%d\n",sum);
    for(int i =1;i<=6;i++){
        int val = arr[i];
        if(val > max){
            max = val;
        }
        if(val < min){
            min = val;
        }
    }
    printf("min -> %d, max -> %d",min,max);

}
