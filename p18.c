#include<stdio.h>
#define pi 3.14159
void main()
{
    float r,h;
    float sa,vol;
    printf("Enter the radius and height of cylinder:");
    scanf("%f%f",&r,&h);
    sa=2*pi*r*(r+h);
    vol=pi*r*r*h;
    printf("The Surface area of cylinder is %f sq.units\n",sa);
    printf("The Volume of cylinder is  %f cu.units\n",vol);
}
