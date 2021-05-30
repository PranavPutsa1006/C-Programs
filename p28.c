#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
         printf("The greatest is %d",a);
    else if(b>c)
         printf("The greatest is %d",b);
    else
          printf("The greatest is %d",c);
}
