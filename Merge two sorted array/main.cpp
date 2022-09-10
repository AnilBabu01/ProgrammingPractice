#include <iostream>

using namespace std;

void sortArray(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int temp =a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

void mergeg(int a1[],int a2[],int n)
{
    int  i=0,j=0,k=0,newsize = n*2,newarray[100];

    while(i<n)
    {
       newarray[k]=a1[i];
       k++;
       i++;
    }

     while(j<n)
    {
     newarray[k]=a1[j];
       k++;
       j++;
    }

    cout<<"After merge two array"<<endl;

    sortArray(newarray,newsize);
    for(int u=0;u<newsize;u++)
    {
       cout<<newarray[u]<<endl;
    }

}

int main()
{
    int a1[100],a2[100],i;
    cout << "Enter the elements in an array1" << endl;
    for(i=0;i<4;i++)
    {
        cin>>a1[i];
    }
    cout << "Enter the elements in an array2" << endl;
    for(i=0;i<4;i++)
    {
        cin>>a2[i];
    }

    mergeg(a1,a2,4);


    return 0;
}
