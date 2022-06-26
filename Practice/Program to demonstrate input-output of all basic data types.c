#include<stdio.h>

int main(){
    char charvar;
    unsigned char unschar;

    short shortvar;
    unsigned short unshortvar;

    int intvar;
    unsigned int unsintvar;

    long longvar;
    unsigned long unslongvar;

    long long longlongvar;
    unsigned long long unslonglongvar;

    float floatvar;
    double doublevar;
    long double doublelongvar;

    printf("Enter a char: ");
    charvar = getchar();
    getchar();
    printf("You enter character: %c  \n", charvar);

    printf("Enter another character:  ");
    unschar = getchar();
    getchar();

    printf("You enter character: %c \n", unschar);

    return 0;
}
