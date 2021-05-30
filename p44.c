#include<stdio.h>
void main()
{
    int n,i;
	char a[100],b[100],c[100];
    printf("Enter 2 strings not longer than 20 characters\n");
	printf("Enter First string:");
	scanf("%s",&a);
	printf("Enter Second string:");
    scanf("%s",&b);
    n=strlen(a);
	printf("Arrays before swapping");
	printf("\nFirst string:");
	printf("%s",a);
	printf("\nSecond string:");
    printf("%s\n",b);
	for (i=0;i<20;i++)
    {
        c[i]=a[i];
		a[i]=b[i];
		b[i]=c[i];
    }
	printf("\nAfter swapping");
	printf("\nFirst string:");
    printf("%s",a);
	printf("\nSecond string:");
    printf("%s",b);
}
