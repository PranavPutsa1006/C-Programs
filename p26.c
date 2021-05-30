#include<stdio.h>
void main()
{
    int a,b,d;
    printf("Enter values for a and b:");
    scanf("%d%d",&a,&b);
    d=(a*a-b*b)/(a+b);
    printf("Difference=%d",d);
}
