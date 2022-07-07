#include<stdio.h>
int main()
{
    int marks[3];

    for(int i=0;i<3;i++){
        printf("Enter Students %d Marks: ",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<3;i++){
        printf("Students %d got %d marks\n",i+1,marks[i]);
    }
}
