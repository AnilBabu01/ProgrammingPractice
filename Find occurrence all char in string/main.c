#include <stdio.h>
#include <stdlib.h>
int getLength(char str[])
{
    int i,j,fre[100];


      for(i=0;str[i]!='\0';i++)
        {
            fre[i]=1;

        for(j=i+1;str[j]!='\0';j++)
        {
             if(str[i]==str[j])
             {
               fre[i]=fre[i]+1;
               str[j] = '0';

             }

        }

       }
         for(i=0;str[i]!='\0';i++)
        {
                if(str[i]!= ' ' && str[i] != '0')
                {
                      printf("Occurence this %c is %d \n", str[i],fre[i]);
                }

        }









}
int main()
{
      char str[100];
      printf("Enter the string\n");
      gets(str);
      getLength(str);


    return 0;
}
