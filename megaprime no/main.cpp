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

int result(int x)
{
    for(int i=2;i<x;i++)
    {
        if(isprime(i))
        {
            if(i<10)
            {
                cout<<i<<" ";
            }
            else
            {
                bool c=1;
                int temp =i;

                while(temp!=0)
                {
                    int temp2 = temp%10;
                    if(!isprime(temp2))
                    {
                        c=0;
                        break;
                    }
                    temp=temp/10;
                }

                if(c)
                {
                    cout<<i<<" ";
                }
            }
        }

    }
}

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin>>n;

    result(n);

    return 0;
}
