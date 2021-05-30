#include<stdio.h>
void main()
{
	float d1,d2,area;
	printf("Enter lengths of diagonals of rhombus:");
	scanf("%f%f",&d1,&d2);
	area=(d1*d2)/2;
	printf("The area of rhombus is %.2f sq.units.\n",area);
}
