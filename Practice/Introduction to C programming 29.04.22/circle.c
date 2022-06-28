#include <stdio.h>
int main()
{
    float radius;
    printf("Enter radius= ");
    scanf("%f", &radius);

    const double Pi = 3.14;
    double Perimeter = 2 * Pi * radius;
    printf("Perimeter: %.2lf\n", Perimeter);

    float Circle = Pi * radius * radius;
    printf("Circle of area: %.2lf\n", Circle);

    return 0;
}
