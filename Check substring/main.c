#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[100],str2[100],i,j;
    printf("Enter the str1\n");
    gets(str1);
    printf("Enter the str2\n");
    gets(str2);

    int len1=strlen(str1);
    int len2=strlen(str2);

    for(i=0;i<len1;i++)
     {
        for(j=0;j<len2;j++)
        {
            if(str1[i+j]!=str2[j])
            {
                break;
            }
        }
        if(j==len2)
        {
            printf("The is string is found at %d \n",i+1);
        }

     }


    return 0;
}
