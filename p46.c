#include <stdio.h>
#include <math.h>
void main()
{
 int n,count=0,r,b,i,x=0;
 printf("Enter a decimal number:");
 scanf("%d",&n);
 r=n;
 while(n!=0)
 {
    n=n/8;
    count++;
 }
 i=count-1;
 int oct[count];
 n=r;
  while(n!=0)
 {
    b=n%8;
    oct[i]=b;
    n=n/8;
    i--;
 }
 printf("The equivalent octal number: ");
 for(i=0;i<count;i++)
 {
    printf("%d",oct[i]);
 }
 printf("\n\n");
 count=0;
 printf("Enter an Octal number:");
 scanf("%d",&b);
 for(i=0;b!=0;++i)
	{
		n=b%10;
		x=((n)*(pow(8,i)))+x;
		b=b/10;
	}
 printf("The equivalent decimal number: %d\n",x);
}
