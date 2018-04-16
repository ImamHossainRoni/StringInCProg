
/* Get 5 character from user and reverse it*/
#include<stdio.h>
void main()
{
    char ch[5];
    int i,j;
    for(i=0;i<5;i++)
    {
        scanf("%c",&ch[i]);
    }
    for(j=4;j>=0;j--)
    {

        printf("%c",ch[j]);
    }
}
