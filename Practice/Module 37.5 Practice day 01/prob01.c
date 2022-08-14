#include <stdio.h>
struct Student
{
    char name[100]; // name of the student
    int marks;
    int roll;       // roll number of the student
    char section;   // section of the student
    int whichClass; // class of the student
};

void print(struct Student a) // function to print the details of the student
{
    printf("%s %d %d %c %d\n", a.name, a.marks, a.roll, a.section, a.whichClass);
}
int main()
{
    struct Student a[3];                    // array of structure
    struct Student highest = {.marks = 0};  // initializing the marks of the highest student to 0
    struct Student lowest = {.marks = 100}; // initializing the marks of the lowest student to 100
    for (int i = 0; i < 3; i++)
    {
        scanf("%s %d %d %c %d", &a[i].name, &a[i].marks, &a[i].roll, &a[i].section, &a[i].whichClass); // taking input from the user
        if (a[i].marks > highest.marks)                                                                // checking if the marks of the current student is greater than the marks of the highest student
        {
            highest = a[i];
        }
    }
    printf("\n");
    printf("Highest-> %s %d %d %c %d\n", highest.name, highest.marks, highest.roll, highest.section, highest.whichClass);
    for (int i = 0; i < 3; i++)
    {
        if (a[i].marks < lowest.marks) // checking if the marks of the current student is less than the marks of the lowest student
        {
            lowest = a[i];
        }
    }
    printf("Lowest-> %s %d %d %c %d\n", lowest.name, lowest.marks, lowest.roll, lowest.section, lowest.whichClass); // printing the details of the lowest student
    for (int i = 0; i < 3; i++)
    {
        // print(a[i]); //printing the details of the student
    }
    return 0;
}
