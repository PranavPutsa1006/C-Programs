#include<stdio.h>
#include<string.h>
void main()
{
    char str[]="malayalam";
    int f=0,r=strlen(str)-1;
    while (r>f)
    {
        if (str[f++]!= str[r--])
        {
            printf("%s is Not Palindrome", str);
        }
    }
    printf("%s is palindrome", str);
}
