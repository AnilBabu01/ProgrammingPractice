// CPP program to check for balanced brackets.
#include <bits/stdc++.h>
using namespace std;

// function to check if brackets are balanced
bool areBracketsBalanced(string expr)
{
	// Declare a stack to hold the previous brackets.
	stack<char> temp;
	for (int i = 0; i < expr.length(); i++) {

		if(expr[i]=='('&&expr[i+1]==')'||expr[i]=='['&&expr[i+1]==']'||expr[i]=='{'&&expr[i+1]=='}')
            {
                return true;

            }
            else
            {
               return false;
            }
	}



}

// Driver code
int main()
{
	string expr = "{()}[]}";

	// Function call
	if (areBracketsBalanced(expr))
		cout << "Balanced";
	else
		cout << "Not Balanced";
	return 0;
}
