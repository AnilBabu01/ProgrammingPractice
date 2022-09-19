//ABCDEF
//ABCDE
//ABCD
//ABC
//AB
//A
//AB
//ABC
//ABCD
//ABCDE
//ABCDEF

			/////////////////////////////////////////////////
			//                MTX Group Inc.               //
		    /////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n=6;                          // casting

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i+1;j++)
		{
			cout<<char(j+64);         // implicit type casting
		}
		cout<<endl;
	}

	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<char(j+64);         // implicit type casting
		}
		cout<<endl;
	}

	return 0;
}

// casting
// types
// implement types of casting
