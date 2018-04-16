/* Get the user's name and tell them whether number of character is even or odd*/
#include<stdio.h>
void main()
{
    char name[100];
    int length;
    gets(name);
    length = strlen(name);
    if(length % 2 == 0)
    {
        printf("Number of character of your name is Even");
    }
    else
    {
        printf("Number of character of your name is odd");
    }
}
