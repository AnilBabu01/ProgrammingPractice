#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int a[n];

 for(int i=0;i<n;i++)
    {
     cin>>a[i];
    }
 for(int i=0;i<n;i++)
   {
     cout<<a[i]<<" ";
   }
   const int N =1e6+2;
   bool check[N];

  for(int i=0;i<N;i++)
   {
       check[i]=false;
   }

 for(int i=0;i<n;i++)
   {

       if(a[i]>=0)
       {
           check[a[i]]=true;
       }

   }



   for(int i=1;i<=n;i++)
   {
       if(check[i]==false)
       {
           cout<<"missing no "<<i<<endl;
            return 0;

       }
   }


    return 0;
}
