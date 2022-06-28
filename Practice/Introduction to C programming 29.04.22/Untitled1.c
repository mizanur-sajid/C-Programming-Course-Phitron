#include <stdio.h>
int main()
{
    char a[100], b[100], jogfol[101], c[101], d[101];
    scanf("%s %s", &a, &b);
    strcpy(c, a);
    strrev(c);
    strcpy(d, c);
    strcpy(c, b);
    strrev(c);
    strcpy(b, c);
    int i = 0, j = 0, k = 0, hate = 0;
    while (i < strlen(d) && j < strlen(b))
    {
        int sum = (d[i] - '0') + (b[j] - '0') + hate;
        jogfol[k] = (sum % 10 + '0');
        hate = sum / 10;
        i++;
        j++;
        k++;
    }
    while (i < strlen(d))
    {
        int sum = (d[i] - '0') + hate;
        jogfol[k] = (sum % 10 + '0');
        hate = sum / 10;
        i++;
        k++;
    }
    while (j < strlen(b))
    {
        int sum = (b[j] - '0') + hate;
        jogfol[k] = (sum % 10 + '0');
        hate = sum / 10;
        j++;
        k++;
    }
    if (hate != 0)
    {
        jogfol[k] = hate + '0';
        k++;
    }
    jogfol[k] = '\0';
    strrev(jogfol);
    printf("%s", jogfol);
}
