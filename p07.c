#include<stdio.h>
void main()
{
    int a,b,i,gcd;
    printf("Please enter 2 integers:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=1;i<=a||i<=b;i++)
    {
        if(a%i==0&&b%i==0)
            gcd=i;
    }
    printf("GCD of %d and %d is %d",a,b,gcd);
}
