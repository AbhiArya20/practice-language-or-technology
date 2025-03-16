#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, K;
    cin >> n >> K;
    vector<int> arr(n);
    for (auto &i : arr)
    {
        cin >> i;
    }

    int start = 0;
    int ans = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            count++;
        while (count > K)
        {
            if (arr[start] == 0)
                count--;
            start++;
        }

        ans = max(ans,i - start + 1);
    }

    cout << ans;
}