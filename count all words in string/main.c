#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char str[50];
    int i=0,wrd=1;

    printf (" \n Enter a string to print first char of each word : ");

      gets(str);

    while(str[i]!='\0')
    {

        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            wrd++;
        }

        i++;
    }

    printf("Total number of words in the string is : %d\n", wrd);


}


