#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 3;
int dp[N][N];

//tabulation
void coinExchange(int n, vector<int> &arr, int x)
{
    vector<vector<int>> dp1(n + 1, vector<int>(x+1, 0));
    dp1[0][0] = 1;
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 0; j < x + 1; j++)
        {
            if (j - arr[i - 1] >= 0)
                dp[i][j] += dp[i][j - arr[i - 1]];
            dp[i][j] += dp[i - 1][j];
        }
    }

    cout << dp[x];
}
// memorization
int coinExchange1(int n, vector<int> &arr, int x)
{
    if (x == 0)
        return 1;
    if (x < 0 || n <= 0)
        return 0;

    if (dp[n][x] != -1)
        return dp[n][x];

    dp[n][x] = coinExchange1(n - 1, arr, x) + coinExchange1(n, arr, (x - arr[n - 1]));

    return dp[n][x];
}
int main()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            dp[i][j] = -1;
        }
    }

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    // coinExchange(n, arr, x);
    // cout<<endl;
    cout << coinExchange1(n, arr, x);
}