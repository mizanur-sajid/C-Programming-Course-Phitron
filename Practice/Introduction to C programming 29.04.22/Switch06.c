#include <stdio.h>
int main()
{
    int num1, num2, result = 0;
    char ch;
    printf("Enter [num1] [+ - * /] [num2]: ");
    scanf("%d %c %d", &num1, &ch, &num2);

    switch (ch)
    {
    case '*':
        result = num1 * num2;
        break;
    }
    printf("%d %c %d = %d", num1, ch, num2, result);
}
