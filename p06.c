#include<stdio.h>
void main()
{
    int f=1,n,i;
    printf("please enter a number:\n");
    scanf("%d",&n);
    if(n==0||n==1)
        f=1;
    else
    {
        for(i=2;i<=n;i++)
        {
            f=f*i;
        }
    }
    printf("%d",f);
}
