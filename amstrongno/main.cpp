//Q-1) Implement Quick Sort                         [Check out video-36]
//Q-2) Print Unique char from given char array      [Check out our STRING playlist]
//Q-3) Topics Asked from OOPS concept               [Check out our OOPS playlist]
//Q-4) Check Amstrong Number

			/////////////////////////////////////////////////
			//                MTX Group Inc.               //
		    /////////////////////////////////////////////////

// AMSTRONG Numbers are those numbers whose sum of cube of atomic digit is equal to
//the number itself

//like,    153    ==>    1*1*1= 1
//					   5*5*5= 125
//					   3*3*3= 27
//
//					   1 + 125 + 27  ==> 153

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n=15;
	int temp=n;
	int result=0;

	while(temp>=1)
	{
		int x=temp%10;
		result+=pow(x,3);   // 3*3*3
		temp/=10;
	}
	if(result==n)
	{
		cout<<"Amstrong Number";
	}
	else{
		cout<<"Num is not a AMSTRONG num";
	}

	return 0;
}
