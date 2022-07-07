//#include<stdio.h>
//int main()
//{
//    const int n = 10;
//    int values[n];
//
//    for (int i=0;i<n;i++){
//        values[i] = i+1;
//        //printf("values[%d] = %d\n",i,values[i]);
//    }
//    values[4] *= 5;
//    values[5]  = values[1] + values[2];
//
//    for(int i=0;i<10;i++){
//        printf("values[%d] = %d\n", i, values[i]);
//    }
//}

#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4};

    printf("%d", sizeof(a)/sizeof(a[0]));
}
