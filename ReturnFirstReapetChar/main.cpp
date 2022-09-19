//Q1)Find the First non-repeating char in the given String of LowerCase, if not return '$'?
//
//	string S="hello";   h e o
//	answer -> h


//  Required Time Complexity  : O(n)
//  Requires Space Complexity : O(n)

						/////////////////////////////////////////////////
						//                  Teradata                   //
            			/////////////////////////////////////////////////



#include<bits/stdc++.h>
using namespace std;

char nonrepeatingCharacter(string s)
{
  int len  =s.length();
 int flag;

 /* Two loops to compare each
    character with other character
    */
 for(int i = 0; i < len; i++) {

     flag = 0;

     for(int j = 0; j < len; j++) {

        /* If it's equal and indexes
           is not same */
        if((s[i] == s[j]) && (i != j)) {
             flag = 1;
             break;
        }
     }

      if (flag == 0) {

          cout<<"First non-repeating character is "<<s[i]<<endl;
          break;

      }

 }

 if (flag == 1) {

     cout<<"&"<<endl;
 }




}

int main()
{
	string s="hheelloo";
	cout<<nonrepeatingCharacter(s); // h
	return 0;
}
