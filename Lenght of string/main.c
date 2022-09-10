#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i=0,length=0;
    printf("Enter string\n");
    gets(str);

     while (str[i] != '\0') {
      printf("%c", str[i]);
       length++;
      i++;
     }
     printf("\n");

      printf("\nlenght of string is %d",length);

    return 0;
}
