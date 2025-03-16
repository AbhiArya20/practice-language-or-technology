#include <bits/stdc++.h>
using namespace std;
bool isSafe(int **arr, int n, int i, int j)
{
    for (int x = i; x >= 0; x--)
    {
        if (arr[x][j] == 1)
            return false;
    }
    for (int x = i, y = j; x >= 0 && y >= 0; x--, y--)
    {
        if (arr[x][y] == 1)
            return false;
    }

    for (int x = i, y = j; x >= 0 && y < n; x--, y++)
    {
        if (arr[x][y] == 1)
            return false;
    }

    return true;
}
bool nQueen(int **arr, int n, int i)
{
    if (i >= n)
    {
        return true;
    }
    for (int j = 0; j < n; j++)
    {

        if (isSafe(arr, n, i, j))
        {
            arr[i][j] = 1;

            if (nQueen(arr, n, i + 1))
                return true;
            arr[i][j] = 0;
        }
    }

    return false;
}
int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }

    nQueen(arr, n, 0);
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}