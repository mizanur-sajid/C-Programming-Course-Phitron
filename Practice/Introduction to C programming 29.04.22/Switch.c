#include <stdio.h>
int main()
{
    int num1 = 20, num2 = 30;
    char op;
    scanf("%c", &op);
    switch (op)
    {
    case '+':
        printf("%d", num1 + num2);
        break;
    case '-':
        printf("%d", num1 - num2);
        break;
    case '*':
        printf("%d", num1 * num2);
        break;
    case '/':
        printf("%d", num1 / num2);
        break;
    default:
        printf("Error");
    }
}
