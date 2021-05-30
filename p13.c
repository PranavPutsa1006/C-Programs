#include<stdio.h>
void main()
{
	float a,b,h,area;
	printf("Enter lengths of parallel sides of trapezium: ");
	scanf("%f%f",&a,&b);
	printf("Enter height of the trapezium:");
	scanf("%f",&h);
	area=(a+b)*h*0.5;
	printf("Area of trapezium is %f sq.units\n",area);
}
