#include<stdio.h>
void main()
{
    int n,i=1,t,count;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count=0;
        if(n%i==0)
            {
                t=1;
                while(t<=i)
                    {
                        if(i%t==0)
                        count++;
                        t++;
                    }
                if(count==2)
                    printf("\n%d is a prime factor",i);
            }
    }
}
