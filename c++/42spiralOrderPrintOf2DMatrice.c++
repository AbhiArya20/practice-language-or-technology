#include <bits/stdc++.h>
using namespace std;

// given an 2D array print that in spiral order.
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int rs = 1;
    int re = n;
    int cs = 1;
    int ce = m;

    while (rs <= re || cs <= ce)
    {

        for (int i = cs; i <= ce; i++)
            cout << arr[rs][i] << " ";

        rs++;

        for (int i = rs; i <= re; i++)
            cout << arr[i][ce] << " ";

        ce--;
        if (cs < ce)
        {
            for (int i = ce; i >= cs; i--)
                cout << arr[re][i] << " ";
        }
        re--;

        if (rs < re)
        {
            for (int i = re; i >= rs; i--)
                cout << arr[i][cs] << " ";
        }
        cs++;
    }
}