				/////////////////////////////////////////////////
					//                  CODETANTRA                //
		   		    /////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
// Function to swap adjacent characters
void swapp(char* str)
{

	char c = 0;
	int length = 0, i = 0;


	length = strlen(str);


	if (length % 2 == 0) {


		for (i = 0; i < length; i += 2) {
			c = str[i];
			str[i] = str[i + 1];
			str[i + 1] = c;
		}


		printf("%s\n", str);
	}
	else {

		for (i = 0; i < length-1; i += 2) {
			c = str[i];
			str[i] = str[i + 1];
			str[i + 1] = c;
		}

		printf("%s\n", str);

	}
}


int main()
{


	char str1[] = "123456789";
	char str2[] = "12345678";

	swapp(str1);
	swapp(str2);

	return 0;
}
