#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char str[50];


    printf (" \n Enter a string to print first char of each word : ");

      gets(str);
      printf("%c",str[0]);


     for(int i=0;str[i]!='\0';i++)
     {

         if(str[i]==" ")
         {
             i++;
             printf("%c",str[i]);
         }


     }


}


