A structure contain an array as its member. Such an array is called an array within a structure.
An array within a structure is a member of the structure and can be accessed just as we access other elements of the structure.
Below is the demonstration of a program that uses the concept of the array within a structure.
The program displays the record of a student name arif comprising the roll number, grade, and marks in various subjects.
The marks in various subjects have been stored under an array called marks. The whole record is stored under a structure called a candidate.

#include <stdio.h>
struct candidate {
    int roll_no;
    char grade;
    float marks[5];
};
void display(struct candidate arif)
{
    printf("Roll number : %d\n", arif.roll_no);
    printf("Grade : %c\n", arif.grade);
    printf("Marks:\n");
    int len = sizeof(arif.marks) / sizeof(float);

    for (int i = 0; i < len; i++) {
        printf("Subject %d : %.2f\n",
               i + 1, arif.marks[i]);
    }
}
int main()
{
    struct candidate Arif = { 6, 'B', { 98.5, 77, 89, 78.5, 66.5 } };
    display(Arif);
    return 0;
}
