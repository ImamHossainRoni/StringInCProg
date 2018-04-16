/* Get a character from user and print it 5 times*/
#include<stdio.h>
void main()
{
    char ch = getchar();
    int i;
    for(i=0;i<5;i++)
    {
       putchar(ch);
    }
}
