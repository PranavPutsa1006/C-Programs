#include <stdio.h>
void main()
{
    int a,b,i,g,lcm;
    printf("Enter an integer:");
    scanf("%d",&a);
    printf("Enter another integer:");
    scanf("%d",&b);
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
            g = i;
    }
    lcm=(a*b)/g;
    printf("LCM of %d and %d is %d\n",a,b,lcm);
}
