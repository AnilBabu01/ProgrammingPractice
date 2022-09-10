#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100],sstr[100];
    int i=0,j=0;
    printf("Enter the string\n");
    gets(str);

 for(i=0;str[i]!='\0';i++)
 {
     if(!(str[i]==' '&&str[i+1]==' '))
     {
         sstr[j]=str[i];
         j++;
     }
 }

 sstr[i]='\0';



 printf("After removing extra spaces: %s",sstr);
    return 0;
}
