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

    int x;
    cin >> x;
    int ans = n, sum = 0, start = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        while (sum > x)  
        {
            sum = sum - arr[start];
            start++;
            if (sum > x)
                ans = min(ans, i - start+1);
        }
    }
    cout << ans;
}