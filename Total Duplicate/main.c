
#include <stdio.h>

int main()
{
	int arr[10], i, j, Size, Count = 0;

	printf("\n Please Enter Number of elements in an array  : ");
	scanf("%d", &Size);

	printf("\n Please Enter %d elements of an Array  : \n ", Size);
	for (i = 0; i < Size; i++)
	{
    	scanf("%d", &arr[i]);
   	}

	for (i = 0; i < Size; i++)
	{
		for(j = i + 1; j < Size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			Count++;
				break;
			}
		}
	}

 	printf("Total Number of Duplicate Elements in this Array  =  %d \n", Count);

 	return 0;
}
