#include<stdio.h>
#include<string.h>

struct Student {
    char name[100];
    int roll;
    int marks;
    int last_mark[100];
};

int main(){
    struct Student a = {"Ariful",12,56};
    for(int i=0;i<5;i++){
        scanf("%d",&a.last_mark[i]);
    }
    printf("Name-%s Roll-%d Marks-%d ",a.name,a.roll,a.marks);
    for(int i=0;i<5;i++){
        printf("%d ",a.last_mark[i]);
    }
    return 0;
}
