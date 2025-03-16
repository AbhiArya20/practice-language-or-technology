#include <bits/stdc++.h>
using namespace std;
bool isSafe(int **arr, int n, int i, int j)
{
    if (i < n && j < n && arr[i][j] == 1)
        return true;

    return false;
}
bool ratInmaze(int **arr, int n, int i, int j, int **ans)
{
    if (i == n-1 && j == n-1)
    {
        ans[i][j] = 1;
        return true;
    }
    if (isSafe(arr, n, i, j))
    {
        ans[i][j] = 1;

        if (ratInmaze(arr, n, i + 1, j, ans))
            return true;
        if (ratInmaze(arr, n, i, j + 1, ans))
            return true;
        ans[i][j] = 0;
        return false;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n];
    int **ans = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        ans[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            ans[i][j] = 0;
        }
    }

    ratInmaze(arr, n , 0, 0, ans);
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}