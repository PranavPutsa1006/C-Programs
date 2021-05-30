#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,exp;
    printf("Enter base:");
    scanf("%d",&a);
    printf("Enter power:");
    scanf("%d",&b);
    exp=pow(a,b);
    printf("The answer is %d\n",exp);
}
