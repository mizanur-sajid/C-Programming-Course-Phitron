#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", &a);

    int i = 0, j = strlen(a) - 1;

    while (i < j)
    {
        if (a[i] != a[j])
        {
            printf("No");
            return 0;
        }
        i++;
        j--;
    }
    printf("Yes");
    return 0;
}
