#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int vowel=0,cons=0;
    printf("Enter the string\n");
    gets(str);

    for(int i =0 ;str[i]!='\0';i++)
    {

        if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vowel++;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            cons++;
        }
    }

    printf("no of consonants is %d and no of vowel is %d",cons,vowel);
    return 0;
}
