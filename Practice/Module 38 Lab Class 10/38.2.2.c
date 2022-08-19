#include<stdio.h>
struct Student{
    char name[100];
    int id;
    int marks;
};
struct Unique_Student
{
    char name[100];
    int id;
    int total;
};

int main()
{
    int n;
    scanf("%d",&n);
    struct Student students[n];
    struct Unique_Student arif={"Arif",17752,0};
    struct Unique_Student jarif={"Jarif",17753,0};

    for(int i=0;i<n;i++){
        scanf("%s %d %d",&students[i].name,&students[i].id,&students[i].marks);
        if(students[i].id == arif.id){
            arif.total+=students[i].marks;
        }
        else{
            jarif.total+=students[i].marks;
        }
    }
    printf("%s %d %d\n%s %d %d\n",arif.name,arif.id,arif.total,jarif.name,jarif.id,jarif.total);
    return 0;
}

