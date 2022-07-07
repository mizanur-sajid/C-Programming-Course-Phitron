#include<stdio.h>
int main()
{
    int marks[10];

    for(int i=0;i<10;i++){
        printf("Enter Student %d Mark: ",i+1);
        scanf("%d", &marks[i]);
    }
    for(int i=0;i<10;i++){
        printf("Student %d got %d marks\n",i+1,marks[i]);
    }
}
