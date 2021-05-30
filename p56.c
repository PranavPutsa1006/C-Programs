#include<stdio.h>
int main()
{
    float dec,bin=0.0,bf=0.0,df=0.0,x=0.1;
    int di,bi=0;
    int z=1,r,temp,i;
    printf("Enter fractional decimal number:");
    scanf("%f",&dec);
    di=dec;
    df=dec-di;
    while(di!=0)
    {
         r=di%2;
         bi=bi+(r*z);
         di=di/2;
         z=z*10;
    }
   for(i=1;i<=4;i++)
   {
       df=df*2;
       temp=df;
       bf=bf+x*temp;
       if(temp==1)
            df=df-temp;
       x=x/10;
   }
   bin=bi+bf;
   printf("The equivalent binary value is %15.4f",bin);
}
