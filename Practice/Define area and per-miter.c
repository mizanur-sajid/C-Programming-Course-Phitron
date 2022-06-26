#include<stdio.h>

int main(){
    int height, width, area, permiter;

    printf("Enter height of rectangle: ");
    scanf("%d", &height);
    printf("Enter with of rectangle: ");
    scanf("%d", &width);
    area = height*width;
    printf("Area is %d\n", area);
    permiter = 2*(height+width);
    printf("Perimeter is %d\n", permiter);

    return 0;
}
