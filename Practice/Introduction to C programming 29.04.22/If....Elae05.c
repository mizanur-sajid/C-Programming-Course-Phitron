#include <stdio.h>
int main()
{
    int SP, CP, amt;
    printf("Enter the selling prince: ");
    scanf("%d", &SP);
    printf("Enter the cost price: ");
    scanf("%d", &CP);

    if (SP > CP)
    {
        amt = SP - CP;
        printf("Profit = %d", amt);
    }
    else if (CP > SP)
    {
        amt = CP - SP;
        printf("Loss: %d", amt);
    }
    else
    {
        printf("No profit no loss.\n");
    }
    return 0;
}
