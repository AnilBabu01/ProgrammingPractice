#include <iostream>

using namespace std;

int sumofdigits(int x)
{
    int sum=0;
   while(x!=0)
   {
       int r=x%10;
       sum=sum+r;
       x=x/10;
   }

   return sum;
}
int main()
{

   int a[]={22,11,22,33};
   int n=sizeof(a)/sizeof(a[0]);

   cout<<"before set zero"<<endl;

    for(int i=0;i<n;i++)
     {
       cout<<a[i]<<" ";
     }

   for(int i=0;i<n;i++)
   {
     a[i]=(a[i]*9)+sumofdigits(a[i]);
   }
    cout<<"After set zero"<<endl;

    for(int i=0;i<n;i++)
     {
       cout<<a[i]<<" ";
     }
    return 0;
}
