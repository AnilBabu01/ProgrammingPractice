#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n,sum=0;
   cin>>n;
   int a[n];

   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }

   int d=a[1]-a[0];
   int ans=2;
   int cur=2;
   int j=2;
   while(j<n)
   {
       if(a[j]-a[j-1]==d)
       {
           cur++;
           cout<<a[j]<<" ";
       }
       else
       {
           d=a[j]-a[j-1];
           cur=2;
       }


       j++;
   }


    return 0;
}
