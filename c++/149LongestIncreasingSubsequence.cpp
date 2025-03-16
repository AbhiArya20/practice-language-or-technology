#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 4;
vector<int> dp1(N, -1);
//tabulation
int longestInc(int arr[], int n)
{
    vector<int> dp(n, 1);
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])  
                dp[i] = max(dp[i], 1 + dp[j]);
        }
        ans = max(ans, dp[i]);
    }
    return ans;
}
// mamorization
int longestInc1(int arr[], int n)
{
    if (dp1[n] != -1)
        return dp1[n];
    dp1[n] = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[n])
            dp1[n] = max(dp1[n], 1 + longestInc(arr, i));
    }
    return dp1[n];
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << longestInc(arr, n)<<endl;
    cout << longestInc1(arr, n);
}