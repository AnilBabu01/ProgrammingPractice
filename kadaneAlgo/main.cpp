//Q -> Given array of integers return maximum subArray SUM,  [Kadane algorithm]

			/////////////////////////////////////////////////
			// VINOVE Softwares & Services Pvt. Ltd., Noida//
			////////////////////Q-2//////////////////////////

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n=8;							// TESTcase(1) : ans= 7
	int a[n]={-2,-3,4,-1,-2,1,5,-3};

	//int n=5;
	//int a[n]={1,-2,2,3,4};

     int cursum=0,maxsum=0;

	for(int i=0;i<n;i++)
	{
		cursum+=a[i];

        if(cursum<0)
        {
            cursum=0;
        }

        if(maxsum<cursum)
        {
            maxsum=cursum;
        }


	}

	 cout<<maxsum;


	return 0;
}
