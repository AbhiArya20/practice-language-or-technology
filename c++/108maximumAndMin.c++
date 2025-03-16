#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr)
    {
        cin >> i;
    }

    sort(arr.begin(), arr.end());
    int mx = 0, mi = 0;
    for (int i = 0; i < n / 2; i++)
    {
        mx += arr[i + n / 2] - arr[i];
        mi += arr[2 * i + 1] - arr[2 * i];
    }
    cout << mx << " " << mi;
}