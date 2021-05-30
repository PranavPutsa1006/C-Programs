#include<stdio.h>
#define pi 3.1415
void main()
{
    int r;
    printf("Enter radius of circle:");
    scanf("%d",&r);
    int area=pi*r*r;
    printf("Area of circle=%d sq.units",area);
}
