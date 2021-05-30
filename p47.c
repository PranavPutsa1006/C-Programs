#include <stdio.h>
#include <math.h>
void main()
{
 int n,count=0,r,i,x=0;
 int b;
 printf("Enter a decimal number:");
 scanf("%d",&n);
 r=n;
 while(n!=0)
 {
    n=n/16;
    count++;
 }
 i=count-1;
 char hex[count];
 n=r;
  while(n!=0)
 {
    b=n%16;
    if(b<10)
        hex[i]=b+48;
    else
        hex[i]=b+55;
    n=n/16;
    i--;
 }
 printf("The equivalent hexadecimal string: ");
 for(i=0;i<count;i++)
 {
    printf("%c",hex[i]);
 }
 printf("\n\n");
 count=0;
 int dec=0,c=0;
 char h[25]={0};
 printf("Enter a hexadecimal string:");
 scanf("%s",&h);
 for(i=strlen(h)-1;i>=0;i--)
	{
		switch(h[i])
        {
            case 'A':
                x=10; break;
            case 'B':
                x=11; break;
            case 'C':
                x=12; break;
            case 'D':
                x=13; break;
            case 'E':
                x=14; break;
            case 'F':
                x=15; break;
            default:
                x=h[i]-48;
       }
       dec+=((x)*pow(16,c));
       c++;

	}
 printf("The equivalent decimal number: %d\n",dec);
}
