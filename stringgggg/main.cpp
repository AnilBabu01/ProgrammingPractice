#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s="anilbabuaksh";

    int freq[26];

     for(int i=0;i<26;i++)
     {
         freq[i]=0;
     }

     for(int i=0;i<s.size();i++)
     {
         freq[s[i]-'a']++;
     }

     char ans='a';
     int Maxf=0;

     for(int i=0;i<26;i++)
     {
         if(freq[i]>Maxf)
         {
             Maxf=freq[i];
             ans=i+'a';
         }
     }


     cout<<Maxf<<" "<<ans<<endl;
    return 0;
}
