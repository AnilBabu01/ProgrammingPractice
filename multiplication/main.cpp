#include <iostream>

using namespace std;

int main()
{
    int a[3][3],b[3][3],r[3][3];
    cout << "Enter the element in matrix 1" << endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Enter ["<<i<<"]["<<j<<"]";
            cin>>a[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
     cout << "Enter the elements in matrix 2" << endl;
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"["<<i<<"]["<<j<<"]";
            cin>>b[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<b[i][j];
        }
        cout<<endl;
    }

     cout << "after multiplication" << endl;
    for(i=0;i<r;i++)
   {
   for(j=0;j<c;j++)
   {
    mul[i][j]=0;
for(k=0;k<c;k++)
{
mul[i][j]+=a[i][k]*b[k][j];
}
}
}
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<r[i][j];
        }
        cout<<endl;
    }
    return 0;
}
