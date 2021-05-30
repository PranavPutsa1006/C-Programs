#include<stdio.h>
void main()
{
    int h,b;
    float area;
    printf("Enter base and height of triangle:");
    scanf("%d%d",&b,&h);
    area=0.5*h*b;
    printf("Area of triangle is %f sq.units",area);
}
