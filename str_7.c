/* Get a string from user then ask the user to choose one character from that string.show the location of that charater in that string*/
#include<stdio.h>
void main()
{
    char ch[100];
    char location;
    int length ,i,count = 0;
    gets(ch);
    length = strlen(ch);
    printf("Which character's location do u want to know?");
    location = getchar();

    for(i=0;i<length;i++)
    {
      if(ch[i] == location)
      {
          count = i+1;
      }
    }
    printf("Location is %d",count);
}
