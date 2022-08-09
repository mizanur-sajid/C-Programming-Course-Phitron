#include<stdio.h>
#include<string.h>
int main()
{
    char arr1[20],arr2[20];
    scanf("%s %s",&arr1,&arr2);
    //printf("%s",arr);
    int sp = strcmp(arr1,arr2);
    printf("%d",sp);
    return 0;
}
