/* Get the name of the user and tell them how many character in his/her name*/
#include<stdio.h>
void main()
{
  int i,length_of_string,blank_space=0,total_char=0;
  char name[100];
  gets(name);
  length_of_string=strlen(name);

  for(i=0;i<length_of_string;i++)
  {

      if(name[i] == 32) //32 is the ascii value of blank space
      {
          blank_space = blank_space + 1;

      }

  }
  total_char = length_of_string - blank_space;
  printf("%d",total_char);

}
