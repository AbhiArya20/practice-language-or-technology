#include <bits/stdc++.h>
using namespace std;
int binary(int arr[], int n, int s, int e)
{
    if (s > e)
        return -1;
    int mid = (s + e) / 2;
    if ((mid == 0 || arr[mid] >= arr[mid + 1]) && (arr[mid] >= arr[mid - 1] || mid - n - 1))
        return mid;
    if (mid > 0 && arr[mid] < arr[mid - 1])
        return binary(arr, n, s, mid - 1);
    return binary(arr, n, mid + 1, e);
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
    cout << binary(arr,  n, 0 , n-1);
}