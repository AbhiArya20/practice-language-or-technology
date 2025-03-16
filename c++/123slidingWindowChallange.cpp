#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k, x;
    cin >> k >> x;
    int ans = 0, sum = 0;

    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    if (sum < x)
        ans = max(ans, sum);

    for (int i = k; i < n; i++)
    {
        if (sum + arr[i] - arr[i - k] <= x)
        {
            sum = sum + arr[i] - arr[i - k];
            ans = max(ans, sum);
        }
    }
    cout << ans;
}