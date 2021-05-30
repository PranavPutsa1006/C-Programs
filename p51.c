#include <stdio.h>
void main()
{
    int n,x,b,count=0;
    printf("Enter a four digit number:");
    scanf("%d",&x);
n=x;
while(x!=0)
    {
       count++;
        x=x/10;
    }
   x=n;
    int a[count],i=count-1;
    while(x!=0)
    {
        b=x%10;
        a[i]=b;
        x=x/10;
        i--;
    }
   for(i=0;i<count;i++)
{
            switch(a[i])
    {
        case 1:printf("One ");break;
        case 2:printf("Two ");break;
        case 3:printf("Three ");break;
        case 4:printf("Four ");break;
        case 5:printf("Five ");break;
        case 6:printf("Six ");break;
        case 7:printf("Seven ");break;
        case 8:printf("Eight ");break;
        case 9:printf("Nine ");break;
        case 0:printf("Zero ");break;
        default:printf("Invalid");break;
    }
}
    printf("\n");
}
