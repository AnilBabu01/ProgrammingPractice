//Q) Given a number find the square root of it in O(log n)

			/////////////////////////////////////////////////
			//                MTX Group Inc.               //
		    /////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n=33;

	int s=1,e=n/2,ans;

	while(s<=e)
	{
		int mid=(s+e)/2;

		if(mid*mid == n)
		{
			cout<<mid;
			return 0;
		}

		if(mid*mid<n)
		{
			s=mid+1;
			ans=mid;
		}

		else
		{
			e=mid-1;
		}
	}
	cout<<ans;
	return 0;
}
