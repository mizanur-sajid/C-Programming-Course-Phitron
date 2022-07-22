/**
Define a structure called point that defines a point on the 2d plane. It should have 2 members, its x and y coordinates
**/
#include<stdio.h>
#include<string.h>
struct Point{
    float x;
    float y;
};

int pointMidpoint(float x, float y){
    float sum = 0;
          sum = x + y;
    //printf("%f",sum);
    float midpoint = sum / 2;
    printf("%.2f",midpoint);
    //return midpoint;
};

int main()
{
    struct Point point;
    point.x;
    point.y;
    scanf("%f %f",&point.x,&point.y);
    pointMidpoint(point.x,point.y);
    printf("%f",pointMidpoint);
}
