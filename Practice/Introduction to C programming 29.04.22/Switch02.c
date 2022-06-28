#include <stdio.h>
int main()
{
    int month;
    printf("Enter a month number(1-12): ");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
        printf("31 days.");
        break;
    }
}
