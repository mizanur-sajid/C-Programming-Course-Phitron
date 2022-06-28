#include <stdio.h>
int main()
{
    int n, num, i;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &num);
        for (i = 0; i < num; i++)
        {
            int sum = i, n2 = i;
            while (n2)
            {
                sum += n2 % 10;
                n2 /= 10;
            }
            if (sum == num)
            {
                printf("%d\n", i);
                break;
            }
        }
        if (i == num)
            printf("%d", 0);
    }
}
