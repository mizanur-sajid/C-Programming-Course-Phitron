#include <stdio.h>
int main()
{
    int a = 1, b = 0, ans;
    ans = (a == 1 ? (b == 2 ? 3 : 5) : 0);
    printf("%d", ans);
    return 0;
}
