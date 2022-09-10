#include<stdio.h>
#include<conio.h>


// row 3 ko max[0] i-n/2+1
// max[0] me a[4] or i=3

int main()
{
    int a[100],output[100],min[10], max[10], i,j=0,n,k;

    printf("Enter no. of element you want to insert:");
    scanf("%d",&n);
    k=n/2;

    for(i=0;i<n;i++)
    {
        printf("\nEnter element %d:",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(i>=n/2)
        {
            max[i-n/2]=a[i]; // 2 3 4 ---- 0 1 2
        }

        else
        {
            min[i]=a[i];
        }

    }


    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(n%2!=0)
            {
            output[i]=max[k];
            k--;
            }

            else
            {
             --k;
            output[i]=max[k];

            }

        }

        else
        {
            output[i]=min[j];
            j++;
        }
    }

    printf("desired resulted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",output[i]);
    }


    return 0;
}
