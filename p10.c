#include<stdio.h>
#include<math.h>
void main()
{
    float s,area;
    printf("Enter side of equilateral triangle:");
    scanf("%f",&s);
    area=(sqrt(3)/4)*s*s;
    printf("Area of equilateral triangle=%f sq.units");
}
