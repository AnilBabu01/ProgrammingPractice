#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char str[50];
    int i;

    printf (" \n Enter a string to print first char of each word : ");

      gets(str);


    while(str[i]!='\0')
    {
       printf("%c ", str[i]);
       i++;
    }
    printf("\n");


}


