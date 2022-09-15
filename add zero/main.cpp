#include <iostream>

using namespace std;

int addZero(int x)
{
     int r=x%10;
       x=x/10;
       x=x*100;
       x=x+r;


    return x;
}
int main()
{

   int a[]={22,11,22,33,55};
   int n=sizeof(a)/sizeof(a[0]);

   cout<<"before set zero"<<endl;

    for(int i=0;i<n;i++)
     {
       cout<<a[i]<<" ";
     }

   for(int i=0;i<n;i++)
   {
     a[i]=addZero(a[i]);
   }
    cout<<"After set zero"<<endl;

    for(int i=0;i<n;i++)
     {
       cout<<a[i]<<" ";
     }
    return 0;
}
