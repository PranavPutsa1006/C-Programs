#include<stdio.h>
void main()
{
 int a,n,b,x[3];
 printf("Enter a number (1-999):");
 scanf("%d",&a);
    int i=2;
    while(a!=0)
    {
        b=a%10;
        x[i]=b;
        a=a/10;
        i--;
    }
    switch(x[0])
    {
        case 1:printf("C");break;
        case 2:printf("CC");break;
        case 3:printf("CCC");break;
        case 4:printf("CD");break;
        case 5:printf("D");break;
        case 6:printf("DC");break;
        case 7:printf("DCC");break;
        case 8:printf("DCCC");break;
        case 9:printf("CM");break;
        default:printf("");break;
    }
    switch(x[1])
    {
        case 1:printf("X");break;
        case 2:printf("XX");break;
        case 3:printf("XXX");break;
        case 4:printf("XL");break;
        case 5:printf("L");break;
        case 6:printf("LX");break;
        case 7:printf("LXX");break;
        case 8:printf("LXXX");break;
        case 9:printf("XC");break;
        default:printf("");break;
    }
    switch(x[2])
    {
        case 1:printf("I");break;
        case 2:printf("II");break;
        case 3:printf("III");break;
        case 4:printf("IV");break;
        case 5:printf("V");break;
        case 6:printf("VI");break;
        case 7:printf("VII");break;
        case 8:printf("VIII");break;
        case 9:printf("IX");break;
        default:printf("");break;
    }
}
