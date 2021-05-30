#include<stdio.h>
void main()
{
    int n,d;
    printf("Enter any number:");
    scanf("%d",&n);
    printf("%d consists of:",n);
    while(n>0)
    {
        d=n%10;
        n=n/10;
        printf("%d ",d);
    }
}
