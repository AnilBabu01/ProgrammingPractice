#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10];
    int flag=0,i,j,k;
    printf("Enter the str1\n");
    gets(str);


   	for(i = 0; i < strlen(str); i++)
  	{
  		for(j = i + 1; str[j] != '\0'; j++)
  		{
  			if(str[j] == str[i])
			{
  				for(k = j; str[k] != '\0'; k++)
				{
					str[k] = str[k + 1];
				}
 			}
		}
	}

    printf("%s",str);




    return 0;
}
