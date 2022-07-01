#include <stdio.h>
int main()
{
    char num[10];
    gets(num);

    int fr[10] = {0};
    for (int i = 0; i < 9; i++)
    {
        char a = num[i];
        int digit = a - '0';
        fr[digit]++;
    }
    int ans;
    for (int i = 0; i <= 9; i++)
    {
        printf("%d -> %d\n", i, fr[i]);
        if (fr[i] == 0)
        {
            ans = i;
        }
    }
    printf("%d", ans);
}
