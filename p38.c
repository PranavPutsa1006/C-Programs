#include<stdio.h>
void main()
{
    int a,b,q,r;
    printf("Enter dividend:");
    scanf("%d",&a);
    printf("Enter divisor:");
    scanf("%d",&b);
    q=a/b;
    r=a%b;
    printf("Quotient=%d\n",q);
    printf("Remainder=%d\n",r);
}
