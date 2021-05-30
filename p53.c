#include <stdio.h>
 void main()
{
    int a,b,sum[15],r=0,i=0;
    printf("Enter first binary number:");
    scanf("%d",&a);
    printf("Enter second binary number:");
    scanf("%d",&b);
    while(a!=0||b!=0)
    {
        sum[i++] =(a%10+b%10+r)%2;
        r=(a%10+b%10+r)/2;
        a=a/10;
        b=b/10;
    }
    if(r!=0)
        sum[i++]=r;
    --i;
    printf("Sum of the two binary numbers is: ");
    while (i >= 0)
        {
            printf("%d", sum[i]);
            i--;
        }
}
