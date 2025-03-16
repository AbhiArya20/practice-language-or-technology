#include <bits/stdc++.h>

using namespace std;

// Given an array of size n find first element index which repeating in array.

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    const int N = 1e6 + 2;
    bool ans[N];
    for (int i = 0; i < N; i++)
    {
       ans[i]=0;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            ans[arr[i]] = 1;
        }
    }
    int answer=-1;
    for (int i = 1; i < N; i++)
    {
        if (ans[i] == 0)
        {
            answer=i;
            break;
        }
    }
    cout << answer;
}
