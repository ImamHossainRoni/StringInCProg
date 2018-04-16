/* Get two names from user and if they are not same then replace the first name with the second name */
#include<stdio.h>

void main()
{
    char firstName[100];
    char secondName[100];
    printf("Enter two names:");
    gets(firstName);
    gets(secondName);

    if(strcmp(firstName,secondName)==1)
    {
        strcpy(firstName,secondName);
        puts(firstName);
        puts(secondName);

    }

}
