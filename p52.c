#include <math.h>
 void main()
{
    int q,r,b,x=0,n;
    int i,j=0;
    char hex[20];
    printf("Enter a Binary number:");
    scanf("%d",&b);
    for(i=0;b!=0;i++)
	    {
		    n=b%10;
		    x=((n)*(pow(2,i)))+x;
	    	b=b/10;
	    }
    q=x;
    while(q!=0)
    {
        r=q%16;
        if(r<10)
            hex[j++]=48+r;
        else
            hex[j++]=55+r;
        q=q/16;
    }
    printf("The equivalent hexadecimal number:");
    for (i=j-1;i>=0;i--)
            printf("%c",hex[i]);
}
