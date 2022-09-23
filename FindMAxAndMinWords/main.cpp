#include <bits/stdc++.h>
// largest word in sentence
using namespace std;

int main()
{

  int n;
  cin>>n;
  cin.ignore();
  char s[n+1];

  gets(s);

   int i=0;
   int curlen=0;
   int maxlen=0;
   int st=0,e=0;
   while(1)
   {
       if(s[i]==' '||s[i]=='\0')
       {
           if(curlen>maxlen)
           {
               maxlen=curlen;
               e=st;
           }

           curlen=0;
           st=i+1;
       }
       else
      curlen++;

     if(s[i]=='\0')
       {
            break;
       }

       i++;
   }

   cout<<"MAx len is "<<maxlen<<endl;
  for(int i=0;i<maxlen;i++)
  {
      cout<<s[i+e];
  }

    return 0;
}
