#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n,sum=0;
   cin>>n;
   int a[n];
   int x;
   cin>>x;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
  int m=0;
  int f=0;
   for(int i=0;i<n;i++)
   {
       sum=0;

       for(int j=i;j<n;j++)
       {
           sum+=a[j];
           cout<<sum<<" ";
            if(x==sum)
            {
              f=1;
              break;
            }

       }
   }
   if(f==1)
   {
       cout<<"This sum of array prsne is subarray"<<endl;
   }
   else
   {
       cout<<"This not sum of array prsne is subarray"<<endl;
   }
    return 0;
}
