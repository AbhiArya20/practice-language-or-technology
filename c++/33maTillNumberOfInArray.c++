#include <bits/stdc++.h>
using namespace std;

// Given an array of size n , for every i form 0 to n-1 output max elements.

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxi = INT_MIN;
    int prevMax = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
        cout << maxi << " ";
    }
}