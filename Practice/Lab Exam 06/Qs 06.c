//We can use structures in C to return more than one value from the function.
//We know that a structure is a user-defined datatype in C that can hold several data
//types of the same or different kind.
//The idea is to creae a struct containing all required data types as its
//member and return that struct from our function. Then we can retrive
//the desired values from the struct inside our called function.

#include<stdio.h>
struct Values {
 int x;
 int y;
 char ch;
};

struct Values mul()
{
    struct Values values = {10,20,'A'};
    return values;
}

int main()
{
    int x,y;
    char ch;

    struct Values values = mul();

    x = values.x;
    y = values.y;
    ch = values.ch;

    printf("%d %d %c",x,y,ch);
    return 0;
}


