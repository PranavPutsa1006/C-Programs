#include<stdio.h>
void main()
{
    int ub=0,i,n;
    printf("Please enter upper bound:");
    scanf("%d",&ub);
    int f0=0,f1=1,f=0;
    for(f=0;f<=ub;)
    {
        printf("%d ",f);
        f=f0+f1;
        f0=f1;
        f1=f;
    }
}
