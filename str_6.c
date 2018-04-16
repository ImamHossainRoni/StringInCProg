/* Get a character from user and reverse it*/
#include<stdio.h>
void main()
{   int i,length;
    char str[100];
    gets(str);
    length = strlen(str);
    for(i=length;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}
