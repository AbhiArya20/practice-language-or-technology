#include <bits/stdc++.h>
using namespace std;
bool isPerfect(int arr[], int pos)
{
    int sum = 0;
    int i = 1;
    while (i < arr[pos])
    {
        if (arr[pos] % i == 0)
            sum += i;
        i++;
    }
    if (sum == arr[pos])
        return true;
    return false;
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
    int k;
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        if (isPerfect(arr, i))
            arr[i] = 1;
        else
            arr[i] = 0;
    }
    int ans = 0;
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    ans = max(ans, sum);
    for (int i = k; i < n; i++)
    {
        sum = sum + arr[i] - arr[i - k];
        ans = max(ans, sum);
    }
    cout<<ans;
}