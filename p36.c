#include<stdio.h>
void main()
{
    char yr[4];
    printf("Enter a year:");
    scanf("%s",&yr);
    printf("The last 2 digits of year are: %d%d\n",yr[2],yr[3]);
}
