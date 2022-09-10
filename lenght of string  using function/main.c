#include <stdio.h>
#include <stdlib.h>


int getLength(char str[])
{
    int len=0,i;

    for(i=0;str[i]!='\0';i++)
    {
      printf("%c", str[i]);
       len++;
    }

   printf("\n");

    return len;
}
int main()
{
     char str[100];
     int len;

    printf("Enter the string\n");
    gets(str);
    len = getLength(str);

    printf("length is string is %d",len);
    return 0;
}
