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


   if(n==1)
   {
     cout<<"No of breaking days are 1 "<<endl;
     return 0;
   }

   int m=-1;
   int ans=0;
   for(int i=0;i<n;i++)
   {
       if(a[i]>m&&a[i]>a[i+1])
       {
           ans++;
       }
       m=max(m,a[i]);
   }

   cout<<"No of breaking days are "<<ans<<endl;
    return 0;
}
