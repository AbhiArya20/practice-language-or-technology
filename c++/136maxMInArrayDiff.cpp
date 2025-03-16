#include <bits/stdc++.h>
using namespace std;
pair<int, int> maxMin(int arr[], int n)
{
    sort(arr, arr + n);
    int i = 0, j = n - 1;
    int maxi = 0;
    while (i < j)
    {
        maxi += abs(arr[j] - arr[i]);
        i++;
        j--;
    }
    i = 0;
    j = 1;
    int mini;
    while (j < n)
    {
        mini += abs(arr[j] - arr[i]);
        i += 2;
        j += 2;
    }

    return {mini, maxi};
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    pair<int, int> ans = maxMin(arr, n);
    cout << ans.first << " " << ans.second;
}