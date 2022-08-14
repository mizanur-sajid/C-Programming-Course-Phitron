/**Write a C program to take input from a file named “input.txt” and calculate how many characters are there in that file**/
#include<stdio.h>
int main()
{
    FILE * myFile;
    char ch;
    int count=0;

    myFile = fopen("input.txt","r");
    if(myFile == NULL){
        printf("Can't open file. Make sure file exits.\n");
        exit(1);
    }

    do{
        ch = fgetc(myFile);
        count++;
    }while(ch !=EOF);

    printf("Number of characters = %d",count);

    return 0;
}
