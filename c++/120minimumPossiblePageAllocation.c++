#include <bits/stdc++.h>
using namespace std;

bool isFisible(int mid, int arr[], int n, int m)
{
    int sum = 0, element = 1;
    for (int i = 0; i < n; i++)
    { 
        if (arr[i] > mid)
            return false;
        if (sum + arr[i] > mid)
        {
            element++;
            sum = arr[i];
            if (element > m)
                return false;
        }
        else
            sum += arr[i];
    }
        return true;
    
}
int approach(int arr[], int n, int m)
{
    int sum = 0;
    if (n < m)
        return -1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int s = 0;
    int e = sum;
    int result = INT_MAX;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (isFisible(mid, arr, n, m))
        {
            result = min(result, mid);
            e = mid - 1;
        }
        else
            s = mid+1;
    }
    return result;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<approach(arr, n,m);
}
