// C++ code for Max
// Water Container
#include <bits/stdc++.h>
using namespace std;

int maxArea(int A[], int e)
{
	int area = 0;
    int s=0;

	while(s<e)
    {
        int curmax = (e-s)*min(A[s],A[e]);
          if(A[s]<A[e])
          {
              s++;
          }
          else
          {
              len--;
          }
			area =max(area,curmax);
    }
	return area;
}

// Driver code
int main()
{
	int a[] = { 1,8,6,2,5,4,8,3,7};
	int b[] = { 3, 1, 2, 4, 5 };

	int len1 = sizeof(a) / sizeof(a[0]);
	cout << maxArea(a, len1);

	int len2 = sizeof(b) / sizeof(b[0]);
	cout << endl << maxArea(b, len2);
}
