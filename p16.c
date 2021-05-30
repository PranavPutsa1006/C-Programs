#include<stdio.h>
void main()
{
    int a,vol,sa;
    printf("Enter side of cube:");
    scanf("%d",&a);
    vol=a*a*a;
    sa=6*a*a;
    printf("Volume of cube:%d cu.units\n",vol);
    printf("Surface area of cube:%d sq.units\n",sa);
}
