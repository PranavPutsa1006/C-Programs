#include<stdio.h>
void main()
{
    int a,b,s;
    printf("Enter values for a and b:");
    scanf("%d%d",&a,&b);
    s=(a*a-b*b)/(a-b);
    printf("Sum=%d",s);
}
