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

    int k;
    cin >> k;

    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    if (sum % 3 == 0)
    {
        cout << true << " " << 0 << " " << k;
    }
    else
    {
        for (int i = k; i < n; i++)
        {
            sum = sum + arr[i] - arr[i - k];
            if (sum % 3 == 0)
            {
                cout << true << " " << i-k+1 << " " << i ;
                return 0;
            }
        }
    }
    cout << false  << " " << -1 << " " << -1;
}