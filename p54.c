#include<stdio.h>
int binadd(int a,int b)
{
    int i=0,r=0,s[20];
    int bins=0;
    while(a!=0||b!=0)
    {
         s[i]=(a%10+b%10+r) % 2;
         r=(a%10+b%10+r) / 2;
         a=a/10;
         b=b/10;
         i++;
    }
    if(r!=0)
         s[i++] = r;
    --i;
    while(i>=0)
    {
         bins= bins*10+s[i];
         i--;
    }
    return bins;
}
int main()
{
    int bin1,bin2,m=0;
    int d,f=1;
    printf("Enter any first binary number: ");
    scanf("%d",&bin1);
    printf("Enter any second binary number: ");
    scanf("%d",&bin2);
    while(bin2!=0){
         d=bin2%10;
         if(d==1)
         {
                 bin1=bin1*f;
                 m=binadd(bin1,m);
         }
         else
         	bin1=bin1*f;
         bin2= bin2/10;
         f = 10;
    }
    printf("Product of two binary numbers: %d",m);
   return 0;
}

