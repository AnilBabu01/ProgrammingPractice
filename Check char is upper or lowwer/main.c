#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter the character to check uppercase or lowercase\n");
    scanf("%c",&ch);

    if(ch>='A'&&ch<='Z')
    {
        printf("this %c is in uppercase",ch);
    }
    else if(ch>='a'&&ch<='z')
    {
         printf("this %c is in lowercase",ch);
    }
    else{
        printf("this is not character");
    }
    return 0;
}
