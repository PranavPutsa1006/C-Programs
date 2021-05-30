#include <stdio.h>
void main()
{
    int n,sum=0,org,d;
    printf("Enter a number:");
    scanf("%d",&n);
    org=n;
    while(n!=0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
        printf("The Sum of Digits of %d is %d\n",org,sum);
}
