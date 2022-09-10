#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
    int temp[n];
    int minn = 0, maxx = n - 1;
    for (int i = 0; i < n; i++) {
        if (i%2==0)
            temp[i] = arr[maxx--];
        else
            temp[i] = arr[minn++];
        }

     for (int i = 0; i < n; i++)
        arr[i] = temp[i];
}


int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    rearrange(arr, n);

    cout << "\nModified Array\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
