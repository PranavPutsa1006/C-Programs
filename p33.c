#include<stdio.h>
void main()
{
    int n,i,max;
    printf("Enter n:");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("%d is the largest number in entered %d numbers",max,n);
}
