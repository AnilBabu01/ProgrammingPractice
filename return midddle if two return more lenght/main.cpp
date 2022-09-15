#include <iostream>
#include<string>
using namespace std;


int numberOfWord(string s ,int n)    // find no. of words in string
{
	int ans=1;

	for(int i=0;i<n;i++)
	if(s[i]==' ')
	ans++;

	return ans;
}

string ans(string s,int check)
{
	int  i=0;
	int count=0;
	string temp="";
	while(count != check)
	{
		if(s[i]==' ')
		count++;
		i++;
	}

	while(s[i] != ' ')
	{
		temp+=s[i];
		i++;
	}

	return temp;
}


string result(string s, int wordsCount)
{
	int check=wordsCount/2;

	if(wordsCount%2==0)     // odd no of word
	 {


		string s1=ans(s,check);    // to
		string s2=ans(s,check-1);  // bachelor

		return (s1.length()>s2.length())? s1 : s2;

	  }
	else                // even no . of word
	{
       return ans(s,check);
	}
}

int main()
{
	string s="Welcome to BACHELOR BHAI";
	int n=s.length();
	int wordsCount=numberOfWord(s,n);
	string str=result(s,wordsCount);
	cout<<str;
	return 0;
}

