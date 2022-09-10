#include<stdio.h>

int main()
{
    char str[80], search[10];
    int count1 = 0, count2 = 0, i, j, flag;

    printf("Enter a string:");
    gets(str);
    printf("Enter search substring:");
    gets(search);

    int l1 = strlen(str);
    int l2 = strlen(search);



    for (i = 0; i <= l1 - l2; i++)
    {
        for (j = i; j < i + l2; j++)
        {
            flag = 1;
            if (str[j] != search[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)

            break;
    }

    if (flag == 1)
        printf("SEARCH SUCCESSFUL! %d and %d",l1,l2);
    else
        printf("SEARCH UNSUCCESSFUL!");

    return 0;
}
