// Q-1 -> How do you find factorial of a number without using loops.  IN ONE LINE ONLY?


								/////////////////////////////////////////////////
								//            Hexaware Technologies            //
            				    /////////////////////////////////////////////////


#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
	return (n==1 or n==0) ? 1 : n*fact(n-1);
}

int main()
{
	int n=5;         // 5! = 120
	cout<<fact(n);
	return 0;
}

// Q-2 -> N-QUEENS Problem?
