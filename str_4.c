/* Get a character from user and print the character 5 times in 5 lines*/
#include<stdio.h>
void main()
{
    char ch = getchar();
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            putchar(ch);
        }
        printf("\n");
    }
}
