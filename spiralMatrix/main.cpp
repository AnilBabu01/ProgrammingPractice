#include <iostream>

using namespace std;

int main()
{

   int m, n, i, j, a[10][10];
    cout << "Enter the number of rows and columns of the matrix : ";
    cin >> m >> n;
    cout << "Enter the array elements : ";
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            cin >> a[i][j];
    cout << "Matrix : \n ";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cout << a[i][j] << "  ";
        cout << "\n ";
    }
   int row_start=0,row_end=n-1,cul_start=0,cul_end=m-1,row,cul;


   while(row_start<=row_end&&cul_start<=cul_end)
   {
       //for row start
        for( cul=cul_start;cul<=cul_end;cul++)
        {
            cout<<a[row_start][cul];

        }
         row_start++;
        //for column end
        for(row=row_start;row<=row_end;row++)
        {
            cout<<a[row][cul_end];

        }
        cul_end--;
       //for row end
        for(cul=cul_end;cul>=cul_start;cul--)
        {
            cout<<a[cul_end][cul];

        }
        row_end--;
        //for col start
        for(row=row_end;row>=row_start;row--)
        {
            cout<<a[row][cul_start];

        }
         cul_start++;
   }
    return 0;
}
