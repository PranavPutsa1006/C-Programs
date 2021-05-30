#include <stdio.h>
#include <string.h>
void main()
{
    char str[50];
    printf("Enter a string consisting of (a to i) lower case:");
    scanf("%s",&str);
    int i,l=strlen(str);
    int s[l];
    for(i=0;i<l;i++)
    {
        switch(str[i])
        {
            case 'a':{s[i]=1;break;}
            case 'b':{s[i]=2;break;}
            case 'c':{s[i]=3;break;}
            case 'd':{s[i]=4;break;}
            case 'e':{s[i]=5;break;}
            case 'f':{s[i]=6;break;}
            case 'g':{s[i]=7;break;}
            case 'h':{s[i]=8;break;}
            case 'i':{s[i]=9;break;}
            default :{s[i]=0;break;}
        }
        printf("%d",s[i]);
    }
}
