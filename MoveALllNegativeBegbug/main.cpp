#include <iostream>

using namespace std;

int main()
{
     int n;
     cin>>n;
     int a[n],i,j=0;

     for(i=0;i<n;i++)
     {
         cin>>a[i];
     }
`
     for(i=0;i<n;i++)
     {
         if(a[i]<0)
         {
             if(i!=j)
             {
                 int temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
                 j++;
             }
         }
     }

    for(i=0;i<n;i++)
     {
         cout<<a[i]<<" ";

     }
    return 0;
}
