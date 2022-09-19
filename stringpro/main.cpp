//  Daffodils Second interview Question   2.0
//Statement:
//		      - Check Given String is Valid or NOT

//- Validation Conditions:-
//			1. -> SET 1 = a to m
//			2. -> SET 2 = N to Z
//
//    - Each word from the STRING should belong to either & only set then is a valid WORD
//    - Mixing of letters from two sets are considered as  INVALID word
//	  - Return True for Valid string & False if not.

//   EXAMPLE:
//				ab c NX               VALID
//				NOP f AS              INVALID
//              abcd STUV             VALID
//				Bachelor Bhai         INVALID

#include<bits/stdc++.h>                // Daffodils || POST  -> SDE
using namespace std;

bool set1(string str, int s, int e)
{
	for(int i=s;i<=e;i++)
	{
		if(str[i]<'a' or str[i]>'m')
		return false;
	}
	return true;
}

bool set2(string str, int s, int e)
{
	for(int i=s;i<=e;i++)
	{
		if(str[i]<'N' or str[i]>'Z')
		return false;
	}
	return true;
}

int main()
{
	string str="aaa NNN";
	int n=str.length();

	int s=0,e=0;     // used to traverse string

	while(s<n)                 // string traversal loop
	{
		while(str[e]!=' ' && e<n)
		{
			e++;
		}

		if(str[s]>='a' && str[s]<='m')
		{
			if(set1(str,s,e-1)==false)
			{
				cout<<"Invalid String";
				return 0;
			}
		}
		else
		{
			if(set2(str,s,e-1)==false)
			{
				cout<<"Invalid String";
				return 0;
			}
		}

		s=e+1;
		e++;

	}

	cout<<"String is VALID";
	return 0;
}

