#include <stdio.h>
int square(int x)
{
    return x * x;
}
void sayHello(void)
{
    printf("Hello\n");
}
int Max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main()
{
    printf("%d\n", Max(10, 20));
    sayHello();
    int x;
    for (int i = 0; i < 10; i++)
    {
        printf("%d %d\n", i, square(i));
    }
}
