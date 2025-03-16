#include <bits/stdc++.h>
using namespace std;

void maxify(vector<int> &arr, int n, int i);
void heapsort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--)
        maxify(arr, n, i);
    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        maxify(arr, i, 0);
    }
}

void maxify(vector<int> &arr, int n, int i)
{
    int maxId = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[maxId])
        maxId = l;

    if (r < n && arr[r] > arr[maxId])
        maxId = r;

    if (maxId != i)                   
    {
        swap(arr[i], arr[maxId]);
        maxify(arr, n, maxId);         
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr)
    {
        cin >> i;
    }

    heapsort(arr);

    for (auto i : arr)
    {
        cout << i << " ";
    }
}