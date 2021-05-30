#include<stdio.h>
void main()
{
    int n,org,d,c=0;
    printf("Enter any number:");
    scanf("%d",&n);
    org=n;
    while(n>0)
    {
        d=n%10;
        n=n/10;
        c++;
    }
    printf("%d has %d digits",org,c);
}
