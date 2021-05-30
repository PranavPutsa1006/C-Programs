#include<stdio.h>
void main()
{
	float l,b,h,vol,sa;
	printf("Enter the length,breadth,height of cuboid : ");
	scanf("%f%f%f",&l,&b,&h);
    sa=2*((l*b)+(b*h)+(l*h)) ;
	vol=l*b*h;
    printf("The surface area of cuboid is %f sq.units\n",sa);
	printf("The volume of cuboid is %f cu.units\n",vol);
}
