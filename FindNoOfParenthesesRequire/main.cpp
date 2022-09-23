// C++ Program to find minimum number of '(' or ')'
// must be added to make Parentheses string valid.
#include <bits/stdc++.h>
using namespace std;

// Function to return required minimum number
int minParentheses(string p)
{

	// maintain balance of string
	int bal = 0;
	int ans = 0;

	for (int i = 0; i < p.length(); ++i) {

		if(p[i]=='(')
        {
             bal+=1;

        }
         if(p[i]==')')
        {
            ans+=1;

        }
        if(i==p.length()-1)
        {

           return(abs(ans)-abs(bal));
        }
	}


}

// Driver code
int main()
{

	string p = "(())))";

	// Function to print required answer
	cout << minParentheses(p);

	return 0;
}
