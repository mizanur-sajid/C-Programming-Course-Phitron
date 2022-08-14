/**Write a C program to take input from a file named “input.txt” and calculate how many characters are there in that file**/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE * myFile;
    char ch;
    /* Open source files in 'r' mode */
    myFile = fopen("input.txt", "r");

    /* Check if file opened successfully */
    if (myFile == NULL)
    {
        printf("\nUnable to open file.\n");
        exit(EXIT_FAILURE);
    }

    /*
     * Logic to count characters, words and lines.
     */
    int count = 0;
    while ((ch = fgetc(myFile)) != EOF)
    {
        count++;
    }

    /* Print file statistics */
    printf("\n");
    printf("Total characters = %d\n", count);

    /* Close files to release resources */
    fclose(myFile);

    return 0;
}
