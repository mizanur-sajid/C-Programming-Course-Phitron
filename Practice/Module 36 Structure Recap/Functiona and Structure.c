#include<stdio.h>

struct Student{
    char name[100];
    int roll;
    int marks;
};
void print(struct Student a){
    printf("%s %d %d",a.name,a.roll,a.marks);
}
void fun(struct Student *a){
    a->marks=100;
}
int main()
{
    struct Student a={"Ariful",22,90};
    fun(&a);
    print(a);
    return 0;
}
