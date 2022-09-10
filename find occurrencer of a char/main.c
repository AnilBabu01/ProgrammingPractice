#include <stdio.h>
#include <stdlib.h>
int getLength(char str[],char ch)
{
    int len=0,i;

    for(i=0;str[i]!='\0';i++)
    {
         if(str[i]==ch)
         {
             len++;
         }
    }

   printf("\n");

    return len;
}
int main()
{
     char str[100],ch;
     int len;

    printf("Enter the string\n");
    gets(str);

    printf("Enter the character for find occurence\n");
    scanf("%c", &ch);

    len = getLength(str,ch);

    printf("occurence of this %c is %d",ch,len);
    return 0;
}
