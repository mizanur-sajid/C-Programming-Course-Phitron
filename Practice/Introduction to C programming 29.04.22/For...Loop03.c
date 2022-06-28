#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    int count = 0;

    do
    {
        count++;

        num = num / 10;
    } while (num > 0 && num != 0);
    printf("Total digits: %d", count);
    return 0;
}
