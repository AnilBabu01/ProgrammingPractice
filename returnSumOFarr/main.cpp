#include<bits/stdc++.h>
using namespace std;

bool isSumPossible(int N, int X, int a[])
{
	for(int i=0;i<N-1;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			if(a[i]+a[j] == X)
			{
				return 1;  // its possible
			}
		}
	}
	return 0;       // not possible
}

int main()
{
	int N=10;
	int X=20;
	int a[N]={2, 18, 21, 28, 31, 38, 40, 55, 60, 62};

	cout<<isSumPossible(N,X,a);
	return 0;
}
