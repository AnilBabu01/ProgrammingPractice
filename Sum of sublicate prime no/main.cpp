#include <iostream>

using namespace std;

bool isprime(int x)
{
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a[]={2,3,3,7,9,12,16,7,2},sum=0;

     int n=(sizeof(a))/sizeof(a[0]);

     for(int i=0;i<n;i++)
     {
         for(int j=i+1;j<n;j++)
         {
            if(a[i]==a[j])
            {
                if(isprime(a[j]))
                {
                    sum=sum+a[j];
                }
            }
         }
     }

    cout << "Sum of duplicate prime number is an array " <<sum<<endl;
    return 0;
}
