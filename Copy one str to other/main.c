#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[10],str2[100];
    printf("Enter the str\n");
    gets(str1);

    printf("%s\n",str1);


    for(int i =0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }

     printf("print after copy one string to another string\n");


    for(int i =0;str2[i]!='\0';i++)
    {
        printf("%c",str2[i]);
    }


    return 0;
}
