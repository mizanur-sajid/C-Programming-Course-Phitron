#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char a[101];
    fgets(a, 101, stdin);
    a[strlen(a) - 1] = '\0';

    bool word = false;
    int ans;
    for (int i = 0; i < strlen(a); i++)
    {
        char value = a[i];
        if (value != ' ')
        {
            word = true;
        }
        if (value == ' ')
        {
            if (word == true)
            {
                ans++;
                word = false;
            }
        }
    }
    if (word == true)
    {
        ans++;
    }
    printf("%d\n", ans);
    return 0;
}
