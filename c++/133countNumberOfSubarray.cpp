#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i > 0)
        {
            arr[i] += arr[i - 1];
        }
        mp[arr[i]]++;
    }
    int ans = 0;
    map<int, int>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        int c = it->second;
        ans += (c * (c - 1)) / 2;
        if (it->first == 0)
            ans += it->second;
    }
    cout<<ans; 
}