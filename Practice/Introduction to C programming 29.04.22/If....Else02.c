#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    if (a < 0)
    {
        printf("Number is Negetive.");
    }
    else if (a == 0)
    {
        printf("Number is zero.");
    }
    else
    {
        printf("Number is Positive.");
    }
    return 0;
}
