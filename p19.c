#include<stdio.h>
#include<math.h>
#define pi 3.14159
void main()
{
    float r,h;
    float sa,vol;
    printf("Enter radius and height of cone:");
    scanf("%f%f",&r,&h);
    sa=pi*r*(r+sqrt(r*r+ h*h));
    vol= pi*r*r*h/3;
    printf("The Surface area of cone is %f sq.units\n",sa);
    printf("The Volume of cone is  %.2f cu.units\n",vol);
}
