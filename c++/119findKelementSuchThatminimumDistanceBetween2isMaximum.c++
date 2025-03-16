#include <bits/stdc++.h>
using namespace std;

//Given an array with n elements that represents n positions along a sraight line. Find K element  such that the minimum distance between any 2 elements is maximum possible.


bool isFisible(int mid, int arr[], int n, int k)
{
    int pos = arr[0], element = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - pos >= mid)
        {
            pos = arr[i];
            element++;
            if (element == k)
                return true;
        }
    }
        return false;
}
int approach(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int s = arr[0];
    int e = arr[n - 1];
    int result = -1;
    while (s < e)
    {
        int mid = (s + e) / 2;
        if (isFisible(mid, arr, n, k))
        {
            result = max(result, mid);
            s = mid + 1;
        }
        else
            e = mid;
    }
    return result;
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
    cout << approach(arr, n, 3);
}
