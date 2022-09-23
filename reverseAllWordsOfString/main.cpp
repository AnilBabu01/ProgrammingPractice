#include <bits/stdc++.h>

using namespace std;

string ReverseWords(string a)
{
   reverse(a.begin(), a.end());
   return a+" ";
}


int main()
{
  string s="this is anil",word="";
  int r=s.length(),i;
  string rr="",result="";

 for(int i=0;i<s.length();i++)
 {
     word="";
     while(s[i]!=' '&&i<r)
     {
         word+=s[i];
         i++;
     }
      rr+=ReverseWords(word);
 }

for(int i=0;i<s.length();i++)
{
    result+=rr[i];

}
cout<<result<<endl;

  //cout<<ReverseWords(s);
    return 0;
}
