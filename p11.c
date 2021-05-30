#include<stdio.h>
void main()
{
    int b,h,area;
    printf("Enter base and height of right angled triangle:");
    scanf("%d%d",&b,&h);
    area=b*h/2;
    printf("Area of triangle:%d sq.units",area);
}
