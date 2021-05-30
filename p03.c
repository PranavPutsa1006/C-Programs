#include<stdio.h>
void main()
{
    int org,sum=0,n,i,d;
    printf("Please enter a number:");
    scanf("%d",&n);
    org=n;
    while(n>0)
    {
        d=n%10;
        sum=sum*10+d;
        n=n-d;
        n=n/10;
    }
    if(sum==org)
        printf("%d is a palindrome",org);
    else
        printf("%d is not a palindrome",org);
}
