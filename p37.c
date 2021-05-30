#include<stdio.h>
void main()
{
    int i,j,a[100],count=0;
    for(i=0;i<100;i++);
    {
        a[i]=i+1;
    }
    for(i=0;i<100;i++)
    {
            while(a[i]!=0)
        {
            j=a[i]%10;
            if(j==7)
                count++;
            a[i]/=10;
        }
    }
    printf("The number of occurrences of 7 in 1 to 100 is %d",count);
}
