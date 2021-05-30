#include<stdio.h>
#define pi 3.14159
void main()
{
    float r;
    float sa,vol;
    printf("Enter radius of the sphere:");
    scanf("%f",&r);
    sa=4*pi*r*r;
    vol=4.0*pi*r*r*r/3;
    printf("The surface area of sphere is %f sq.units\n",sa);
    printf("The volume of sphere is  %f cu.units\n",vol);
}
