#include <stdio.h>

void main()
{
    char oct[100]={0};
    int oc,c=0,d,n,x=0,r,b,count=0,octal;
    int i = 0;
    printf("Enter the octal number: ");
    scanf("%d",&oc);
    octal=oc;
    while(oc)
    {
        oc=oc/10;
        c++;
    }
    oc=octal;
    for(i=c-1;i>=0;i--)
    {
        d=oc%10;
        oct[i]=48+d;
        oc=oc/10;
    }
    printf("%s\n",oct);
    i=0;
    printf("The equivalent binary number: ");
    while (oct[i])
    {
        switch (oct[i])
        {
        case '0':
            printf("000"); break;
        case '1':
            printf("001"); break;
        case '2':
            printf("010"); break;
        case '3':
            printf("011"); break;
        case '4':
            printf("100"); break;
        case '5':
            printf("101"); break;
        case '6':
            printf("110"); break;
        case '7':
            printf("111"); break;
        default:
            printf("\n Invalid ");
            return 0;
        }
        i++;
    }
    oc=octal;
    for(i=0;oc!=0;++i)
	{
		n=oc%10;
		x=((n)*(pow(8,i)))+x;
		oc=oc/10;
	}
 printf("\nThe equivalent decimal number: %d\n",x);

 r=x;
 while(n!=0)
 {
    x=x/16;
    count++;
 }
 i=count-1;
 char hex[count];
 x=r;
  while(x!=0)
 {
    b=x%16;
    if(b<10)
        hex[i]=b+48;
    else
        hex[i]=b+55;
    x=x/16;
    i--;
 }
 printf("The equivalent hexadecimal string: ");
 for(i=0;i<count;i++)
 {
    printf("%c",hex[i]);
 }
}
