#include <bits/stdc++.h>
using namespace std;

// Given two 2D array find out the mutiplication of arrays.
int main()
{
    int n1, n2, n3, n4;
    cin >> n1 >> n2;
    int arr1[n1][n2];
    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= n2; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cin >> n3 >> n4;

    if (n2 != n3)
    {
        cout << "Not Possible";
        return 0;
    }
    int arr2[n1][n2];
    for (int i = 1; i <= n3; i++)
    {
        for (int j = 1; j <= n4; j++)
        {
            cin >> arr2[i][j];
        }
    }
    int ans[n1][n4] = {0};

    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= n4; j++)
        {
            for (int k = 1; k <= n2; k++)
            {
                ans[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= n4; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}