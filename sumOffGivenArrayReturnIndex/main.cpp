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

   for(int i=0;i<n;i++)
   {

       for(int j=i;j<n;j++)
       {
          sum=0;
          for(int k=i;k<=j;k++)
          {
              sum+=a[k];

          }
          if(x==sum)
          {
              cout<<"The sum arrau is"<<i<<" "<<j<<endl;
          }

       }
   }

    return 0;
}
