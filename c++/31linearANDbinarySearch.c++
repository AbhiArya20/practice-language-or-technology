#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n-1;

    while (start<=end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            start = mid + 1;
        if (arr[mid] > key)
            end = mid - 1;
    }
    return -1;
}

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
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

    int key;
    cin >> key;
    // cout << linearSearch(arr, n, key);
    cout << binarySearch(arr, n, key);
}