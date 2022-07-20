#include<stdio.h>
//Global structure
typedef struct person{
    int age;
    float salary;
}person;
int main()
{
    person person1;
    person1.age= 27;
    person1.salary=27000.00;

    printf("Age=%d\n",person1.age);
    printf("Salary=%0.2f",person1.salary);

    getchar();
}
