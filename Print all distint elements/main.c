#include <stdio.h>
int main()
{
    int arr1[100], n;
    int i, j;

       printf("Input the number of elements to be stored in the array: ");
       scanf("%d",&n);
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }

    printf("\nThe distint elements found in the array are: \n");

    for(i=0; i<n; i++)
    {+-

        for(j=0; j<i; j++)
        {
             if(arr1[i]==arr1[j])
               {
                    break;
               }


        }

        if(j==i)
        {
          printf("%d ",arr1[i]);
        }
    }
       printf("\n\n");
}
