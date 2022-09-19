//Q -> ) Given array of integers
//return sum of maximum four elements
//if number of elements are less than 4 , return sum of all elements

			/////////////////////////////////////////////////
			// VINOVE Softwares & Services Pvt. Ltd., Noida//
			/////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=10;
	int a[10]={1,8,6,2,4,7,5,0,3,9};  //30;
//int n=3;
//int a[n]={5,4,2};
	int sum=0;
   sort(a,a+n);
      for(int i=0;i<n;i++)
      {
        cout<<a[i]<<" ";

      }

	if(n<4)
	{
		for(int i=0;i<n;i++)
		sum+=a[i];

		cout<<sum;
		return 0;s
	}

	else
	{
          cout<<a[n-1] +
		      a[n-2] +
		      a[n-3] +
		      a[n-4];
		      return 0;
	}

	return 0;
}
