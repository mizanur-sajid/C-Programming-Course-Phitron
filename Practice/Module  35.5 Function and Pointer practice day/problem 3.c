#include<stdio.h>
int get_length(char input[]){
    int index=0;
    while(input[index]!='\0')
    {
        index++;
    }
    return index;
}

int main()
{
    char x[]="hello_world!";
    int n = get_length(x);
    printf("%d",n);
    return 0;
}
