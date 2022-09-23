#include <bits/stdc++.h>

using namespace std;

int maxConWater(int a[],int n)
{
    int maxarea=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int curarea = (i-j)* min(a[i],a[j]);

            maxarea=max(maxarea,curarea);
        }
    }

    return maxarea;
}
int main()
{

    int a[]={1,5,6,3,4,2};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<maxConWater(a,n);
    return 0;
}
