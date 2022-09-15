#include <iostream>

using namespace std;

int main()
{
    int n,a[50][50],i,j;
    cout << "Enter the value of n" << endl;
    cin>>n;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<i;k++)
        {
            if(j==1||j==i)
              a[i][j]=1;
            else
              a[i][i]=a[i-1][j-1]+a[i-1][j];


            cout<<a[i][j]<<" ";
        }

        cout<<endl;
    }
    return 0;
}
