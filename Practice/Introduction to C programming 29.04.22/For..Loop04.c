#include <stdio.h>
int main()
{
    int num, sum;
    printf("Input number: ");
    scanf("%d", &num);

    int last_digit = num % 10;
    printf("Last digit: %d\n", last_digit);

    while (num >= 10)
    {
        num = num / 10;
    }
    printf("First digit: %d\n", num);

    sum = num + last_digit;
    printf("SUM: %d+%d=%d", num, last_digit, sum);
}
