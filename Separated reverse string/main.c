#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char str[50];
    int i;

    printf (" \n Enter a string to print first char of each word : ");

      gets(str);

      i=strlen(str);
     for(str[i]='\0';i>=0;i--)
        {
          printf("%c  ", str[i]);
        }
    printf("\n");


}


