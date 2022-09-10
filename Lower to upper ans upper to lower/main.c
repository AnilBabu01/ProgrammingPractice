#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char str[50];


    printf (" \n Enter a string to convert lower to uppercase : ");

    scanf( "%s", &str);

     for(int i=0;str[i]!='\0';i++)
     {
         if(str[i]>='a'&&str[i]<='z')
         {
             str[i]=str[i]-32;
         }



     }

   printf("%s",str);
}


