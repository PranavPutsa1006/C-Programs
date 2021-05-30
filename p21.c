#include<stdio.h>
#include<math.h>
#define pi 3.14159
void main()
{
    int r,l,b,x,y,z;
    float p;
    printf("Enter the radius of the circle:");
    scanf("%d",&r);
    p=2*pi*r;
    printf("The Perimeter of  circle  is %f units\n",p);

    printf("Enter breadth and length of the rectangle:");
    scanf("%d%d",&b,&l);
    p=2*(b +l);
    printf("The Perimeter of rectangle is %f units\n",p);

    printf("Enter the sizes of all sides of the triangle : ");
    scanf("%d%d%d",&x,&y,&z);
    p=x+y+z;
    printf("The Perimeter of triangle is %f units\n",p);
}
