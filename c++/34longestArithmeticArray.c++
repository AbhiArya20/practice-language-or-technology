#include <bits/stdc++.h>
using namespace std;

// Given array find maximum size of sub array is in AP
int main()
{
    int n;
    cin >> n;
    int ans = INT_MIN;
    if (n < 2)
    {
        cout << "not";
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n  ; i++)
    {
       cin>>arr[i];
    }
    
    for (int i = 1; i < n; i++)
    {
        int counter = 2;
        int diff= arr[i-1]-arr[i];
        for (int j = i; j < n; j++)
        {
            if (arr[j]-arr[j-1]==diff)
            counter++;
            ans= max(ans,counter);
            if (arr[j]-arr[j-1]!=diff)
            {
                counter=2;
                diff=arr[j]-arr[j-1];
            }

        }
    }
    cout<<ans;
}