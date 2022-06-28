#include <stdio.h>
int main()
{
    int num, n;
    int reverse = 0;
    scanf("%d", &n);

    num = n;
    while (n != 0)
    {
        reverse = (reverse * 10) + (n % 10);

        n /= 10;
    }
    if (reverse == num)
    {
        printf("%d is palindrome.", num);
    }
    else
    {
        printf("%d is not palindrome.", num);
    }
    return 0;
}
