#include <bits/stdc++.h>
using namespace std;

// Given an 2D array having row and column is sorted search for given number in array.
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int arr[n1][n2];
    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= n2; j++)
        {
            cin >> arr[i][j];
        }
    }
    int key;
    cin >> key;

    int start = 0, end = n2;
    while (start <= n1 && end >= 1)
    {
        if (arr[start][end] == key)
        {
            cout << start << " " << end;
            return 0;
        }

        if (arr[start][end] <= key)
            start++;

        if (arr[start][end] >= key)
            end--;
    }
}