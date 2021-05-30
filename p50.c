#include <stdio.h>

void main()
{
    int n,x;
    printf("Enter a four digit number:");
    scanf("%d",&n);
    int a[4],i=0;
    while(n!=0&&i<4)
    {
        x=n%10;
        a[i]=x;
        n=n/10;
        i++;
    }
    switch(a[3])
    {
        case 1:printf("One thousand ");break;
        case 2:printf("Two thousand ");break;
        case 3:printf("Three thousand ");break;
        case 4:printf("Four thousand ");break;
        case 5:printf("Five thousand ");break;
        case 6:printf("Six thousand ");break;
        case 7:printf("Seven thousand ");break;
        case 8:printf("Eight thousand ");break;
        case 9:printf("Nine thousand ");break;
        default:printf("");break;
    }
    switch(a[2])
    {
        case 1:printf("one hundred ");break;
        case 2:printf("two hundred ");break;
        case 3:printf("three hundred ");break;
        case 4:printf("four hundred ");break;
        case 5:printf("five hundred ");break;
        case 6:printf("six hundred ");break;
        case 7:printf("seven hundred ");break;
        case 8:printf("eight hundred ");break;
        case 9:printf("nine hundred ");break;
        default:printf("");break;
    }
    switch(a[1])
    {
        case 1:printf("and ten ");break;
        case 2:printf("and twenty ");break;
        case 3:printf("and thirty ");break;
        case 4:printf("and forty ");break;
        case 5:printf("and fifty ");break;
        case 6:printf("and sixty ");break;
        case 7:printf("and seventy ");break;
        case 8:printf("and eighty ");break;
        case 9:printf("and ninety ");break;
        default:printf("");break;
    }
    switch(a[0])
    {
        case 1:printf("one");break;
        case 2:printf("two");break;
        case 3:printf("three");break;
        case 4:printf("four");break;
        case 5:printf("five");break;
        case 6:printf("six");break;
        case 7:printf("seven");break;
        case 8:printf("eight");break;
        case 9:printf("nine");break;
        default:printf("");break;
    }
    printf("\n");
}
