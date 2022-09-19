					/////////////////////////////////////////////////
					//                  TATA ELXSI                 //
		   		    /////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int HEIGHT=3;   // display height of Pyramin {GIVEN}
	int CARDS=0;
	for(int i=1;i<=HEIGHT;i++)
	{
		CARDS=CARDS+(i*3);
	}

	cout<<"Cards required to Make a Pyramid of Height and total cards "<<HEIGHT<<" is "<<CARDS-HEIGHT;

	return 0;
}
