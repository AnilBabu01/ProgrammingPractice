//Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.
//Note: Midnight is 12:00:00 AM on a 12-hour clock and 00:00:00 on a 24-hour clock. Noon
// is 12:00:00 PM on 12-hour clock and 12:00:00 on 24-hour clock
//
//TestCases:
//
//Input : A single string containing a time in 12-hour
//clock format(hh:mm:ss AM or hh:mm:ss PM
//        where 01 <= hh <= 12 or 01 <= mm,ss <= 59
//Output :Convert and print the given time in 24-hour format,
//where 00 <= hh <= 23
//
//Input : 12:01:00PM
//Output : 12:01:00

										/////////////////////////////////////////////////
										//               Repozitory, Hissar            //
							   		    /////////////////////////////////////////////////


#include<bits/stdc++.h>

using namespace std;

string timeConversion(string s)
{
	int h1=s[0] - '0'; // 1
	int h2=s[1] - '0'; // 2
	string ans="";

	int hrs=h1*10+h2; // 1*10+2 => 10+2=12

	if(s[8] == 'A')
	{
		if(hrs == 12)
		{
			ans+="00";
		}
		else
		{

			for(int i=2;i<=7;i++)
			ans+=s[i];
		}

	}

	else
	{
		if(hrs == 12)
		{
			ans+="12";
			for(int i=2;i<=7;i++)
			{
				ans+=s[i];
			}
		}
		else
		{
			hrs+=12;

			ans=to_string(hrs);
			for(int i=2;i<=7;i++)
			{
				ans+=s[i];
			}
		}

	}

	return ans;
}



int main()
{
	string sample1 = "22:01:00PM";   // in 24 hr = 12:01:00

	string sample2 = "02:30:07PM";   // in 24 hr = 14:30:07

	cout<<timeConversion(sample1);


	return 0;
}
