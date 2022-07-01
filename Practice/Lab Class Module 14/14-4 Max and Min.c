#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int score[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &score[i]);
    }
    int answer = 0, minVal = score[0], maxVal = score[0];
    for (int i = 1; i < n; i++)
    {
        if (score[i] > maxVal || score[i] < minVal)
        {
            answer++;
        }
        if (score[i] > maxVal)
        {
            maxVal = score[i];
        }
        if (score[i] < minVal)
        {
            minVal = score[i];
        }
    }
    printf("%d\n", answer);
}
