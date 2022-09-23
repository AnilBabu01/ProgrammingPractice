#include <bits/stdc++.h>

using namespace std;
  string removeOuterParentheses(string S)
  {


    string res;


    int count = 0;
//(()())(())

    for(int i=0;i<S.length();i++) {

        if (S[i]== '(' && count++ > 0)


            res += S[i];


        if (S[i] == ')' && count-- > 1)


            res += S[i];
    }


    return res;
}
int main()
{
      string str="(()())(())";
      cout<<removeOuterParentheses(str);
    return 0;
}
