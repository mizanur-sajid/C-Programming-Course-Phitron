#include<stdio.h>
#include<math.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    if(!('a'<=ch || ch>'z')){
        printf("Lowercase");
    }
    else{
        printf("No");
    }
}
