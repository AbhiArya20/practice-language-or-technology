#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2)
{
    double v1 = double(p1.first / p1.second);
    double v2 = double(p2.first / p2.second);
    return v1 > v2;
}
int main()
{
    int n, w;
    cin >> n >> w;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr.begin(), arr.end(), compare);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (w >= arr[i].second)
        {
            ans += arr[i].first;
            w -= arr[i].second;
            continue;
        }
        double vw = double(arr[i].first) / arr[i].second;
        ans += vw * w;
        w = 0;
        break;
    }
    cout << ans;
}