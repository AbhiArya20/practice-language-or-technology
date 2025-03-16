#include <bits/stdc++.h>
using namespace std;

// check if two element of array is equal to given sum.

bool check(int arr[], int n, int key)
{

    int start = 0, end = n - 1;
    while (start < end)
    {
        if (arr[start] + arr[end] == key)
        {
            cout << start << " " << end << endl;
            return true;
        }

        if (arr[start] + arr[end] <= key)
        start++;

        if (arr[start] + arr[end] >= key)
        end--;

    }

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
    int key;
    cin>>key;
    cout << check(arr, n, key);
}