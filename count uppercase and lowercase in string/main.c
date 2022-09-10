#include <stdio.h>
#include <stdlib.h>

int main()
{
     char str[100];
     int lowcount=0,uppercount=0;
     printf("Enter the string\n");
    gets(str);


  for(int i=0;str[i]!='\0';i++)
  {
      if(str[i]>='A'&&str[i]<='Z')
      {
          uppercount++;
      }
      if(str[i]>='a'&&str[i]<='z')
      {
          lowcount++;
      }
  }

  printf("Lowercase count is %d and Uppercase count is %d",lowcount,uppercount);
    return 0;
}
