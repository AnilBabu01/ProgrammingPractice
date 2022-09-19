//Given two strings in lowercase, the task is to make them anagram. The only allowed operation is to remove a
//character from any string. Find minimum number of characters to be deleted to make both the strings anagram?
//
//Input : str1 = "bcadeh" str2 = "hea"
//Output: 3
//We need to remove b, c and d from str1.
//
//Input : str1 = "cddgk" str2 = "gcd"
//Output: 2
//
//Input : str1 = "bca" str2 = "acb"          // b c a \0
//Output: 0
//


								/////////////////////////////////////////////////
								//               Repozitory, Hissar            //
            				    /////////////////////////////////////////////////


#include<bits/stdc++.h>

using namespace std;

int makeAnagram(string s1, string s2)
{
    int n1 = s1.length();
    int n2 = s2.length();
    int f=0;



    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    // Compare sorted strings
    for (int i = 0; i < n1; i++)
    {
         if (s1[i]==s2[i])
         {
             f=1;
         }
    }


    if(f==1)
    {
           int n;
         if (s1 != s2)
         {
            if (s1 > s2)
             {
              n=n1-n2;

                 for(int i=0;i<n;i++)
                 {

                     s1.pop_back();
                 }
                  if(s1==s2)
                     {
                          cout << s1 << " this is successfully converted into anagram string Need to delete no " <<n<<" char"<< endl;
                     }

               }

             else
             {
                   n=n2-n1;

                for(int i=0;i<n;i++)
                 {

                     s2.pop_back();

                 }
                  if(s2==s1)
                     {
                          cout << s2 << " this is successfully converted into anagram string Need to delete no " <<n<<" char"<< endl;
                     }


             }

         }



    }
    else
    {

        cout<<"Not possible to make anagram string"<<endl;
    }

}

int main()
{
	string s1 = "cd";
	string s2 = "cdd";

      makeAnagram(s1,s2);	// 3

	return 0;
}
