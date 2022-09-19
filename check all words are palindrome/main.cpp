//q(1) write a program to check all words of given string is palindrome or  not;



#include<bits/stdc++.h>
using namespace std;

void checkPalindrome(string word)
{

        string str=word;
        reverse(word.begin(), word.end());



	if(str == word)
	{
		cout<<str<<" is palinfrome"<<endl;
	}
	else
	{
		cout<<str<<" is not palindrome"<<endl;
	}
}

int main()
{


	string words="cor ani babu ccc ramesh sms";
    string word="";

    for(int i=0;i<words.length();i++)
    {
s
        if(words[i]!=' ')
        {

            word=word+words[i];
        }
        else
        {
           checkPalindrome(word);
            word="";
        }
    }
     checkPalindrome(word);



	return 0;
}

