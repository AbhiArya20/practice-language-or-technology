#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 4;
int dp[N][N];
int dp1[N][N];
int knapsack(int value[], int weight[], int w, int n)
{
    if (n == 0 || w == 0)
        return 0;
    if (dp[n][w] != -1)
        return dp[n][w];
    if (w < weight[n - 1])
        dp[n][w] = knapsack(value, weight, w, n - 1);
    else
        dp[n][w] = max((knapsack(value, weight, w - weight[n - 1], n - 1) + value[n - 1]), knapsack(value, weight, w, n - 1));
    return dp[n][w];
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

    int n, w;
    cin >> n >> w;
    int value[n];
    int weight[n];
    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
        cin >> weight[i];
    }
    cout << knapsack(value, weight, w, n);
}