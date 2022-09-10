#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[10],str2[100];
    int flag=0,j=0;
    printf("Enter the str1\n");
    gets(str1);
    printf("Enter the str2\n");
    scanf("%s",&str2);
    for(int i =0;str1[i]!='\0';i++)
    {
        if(str1[i]!=str2[i])
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        printf("The string is same");
    }
    else
    {
         printf("The string is not same");
    }



    return 0;
}
