#include <stdio.h>
void main()
{
   char str[100], sstr[100];
   int pos, l, i = 0;

       printf("Input the string : ");
       gets(str);

   printf("Input the position to start extraction :");
   scanf("%d", &pos);

   printf("Input the length of substring :");
   scanf("%d", &l);

   while (i < l)
   {
      sstr[i] = str[pos+i-1];
      i++;
   }
   sstr[c] = '\0';

   printf("The substring retrieve from the string is : \" %s\ ", sstr);

}
