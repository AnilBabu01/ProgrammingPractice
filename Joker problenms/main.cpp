//  Daffodils First interview Question

//Statement:
//		      - Given n number of boxes
//- there are 4 jokers running through the boxes & modifying its present state
//
//- JOKER 1  -> Open all Boxes
//
//- JOKER 2  -> Closes the box but only for multiples of 2
//				___  i.e. 2,4,6,8, ......................
//- JOKER 3  -> if box is open , it closes the box & vice versa but only for
//		      multiples of 3 ___  i.e. 3,6,9,12, ......................
//
//- JOKER 4  -> if box is open , it closes the box & vice versa but only for
//		      multiples of 4 ___  i.e. 4,8,12,16,20, ................

// show the final state of boxes


#include<bits/stdc++.h>
using namespace std;

int main()
{

   int a[100]={0},n;
   cout<<endl<<"Enter the no of box"<<endl;
   cin>>n;

   for(int i=1;i<=n;i++)
   {
       cout<<a[i]<<" ";
   }
   //joker 1
   for(int j1=1;j1<=n;j1++)
   {
       a[j1]=1;
   }
    cout<<endl;
   for(int i=1;i<=n;i++)
   {
       cout<<a[i]<<" ";
   }

   //joker 2

   for(int j2=2;j2<=n;j2=j2+2)
   {
       a[j2]=0;
   }

    cout<<endl;
   for(int i=1;i<=n;i++)
   {
       cout<<a[i]<<" ";
   }
    //joker 3

   for(int j3=3;j3<n;j3+=3)
   {
       a[j3]=!a[j3];
   }
  cout<<endl;
   for(int i=1;i<=n;i++)
   {
       cout<<a[i]<<" ";
   }
   //joker 4

   for(int j4=4;j4<n;j4+=4)
   {
       a[j4]=!a[j4];
   }

  cout<<endl;
   for(int i=1;i<=n;i++)
   {
       cout<<a[i]<<" ";
   }







	for(int i=1;i<=n;i++)
	{
		if(a[i]==1)
		cout<<endl<<"Box "<<i<<" is Opened";
		else
		cout<<endl<<"Box "<<i<<" is Closed";
	}

	return 0;
}

