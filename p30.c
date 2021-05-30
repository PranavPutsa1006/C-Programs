#include <stdio.h>
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
void main()
{
   int r,n,c;
   printf("Enter n:");
   scanf("%d",&n);
   printf("Enter r:");
   scanf("%d",&r);
   if(r>n)
   {
       printf("Error!");
   }
   else
   {
       c=fact(n)/(fact(r)*fact(n-r));
       printf("%dC%d is %d\n",n,r,c);
   }
}

