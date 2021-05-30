#include<stdio.h>
void main()
{
    int n;
    printf("Number of elements:");
    scanf("%d",&n);
	int a[n],b[n],c[n],i;
	printf("Enter First array:");
	for (i=0;i<n;i++)
	    scanf("%d",&a[i]);
	printf("\nEnter Second array:");

	for (i=0;i<n;i++)
	    scanf("%d",&b[i]);
	printf("Arrays before swapping");
	printf("\nFirst array:");
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nSecond array:");
	for (i=0;i<n;i++)
		printf("%d ",b[i]);
	for (i=0;i<n;i++)
	        {c[i]=a[i];
		a[i]=b[i];
		b[i]=c[i];}
	printf("\nAfter swapping");
	printf("\nFirst array:");
	for (i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\nSecond array:");
	for (i=0;i<n;i++)
		printf("%d ",b[i]);}
