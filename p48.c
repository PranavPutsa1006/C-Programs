#include <stdio.h>
void main()
{
    char oct[100];
    int i=0;
    printf("Enter an octal number: ");
    scanf("%s",oct);
    printf("The equivalent binary number: ");
    while(oct[i])
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
            printf("\nInvalid!An octal number contains elements from 0 to 7 only");
            return 0;
        }
        i++;
    }

    int bin,oc=0,x;
    i=1;
    printf("\nEnter a binary number:");
    scanf("%d",&bin);
    while (bin!=0)
    {
        x=bin%10;
        oc=oc+(x*i);
        i=i*2;
        bin=bin/10;
    }
    printf("The Equivalent octal value: %o\n", oc);
}
