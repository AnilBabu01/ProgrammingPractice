#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[10],str2[100];
    int flag=0,i,j;
    printf("Enter the str1\n");
    gets(str1);
    printf("Enter the str2\n");
    scanf("%s",&str2);

    i=strlen(str1);
    str1[i]="";
    for(j=0;str2[j]!='\0';i++,j++)
    {
        str1[i]=str2[j];

    }

   str1[i]='\0';


    for(j=0;str1[j]!='\0';i++,j++)
    {
      printf("%c",str1[j]);

    }


    return 0;
}
