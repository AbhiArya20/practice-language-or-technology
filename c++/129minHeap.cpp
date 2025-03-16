#include <bits/stdc++.h>
using namespace std;

void maxHeap(vector<int> &arr, int n, int i)
{
    int maxId = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && arr[l] < arr[maxId])
        maxId = l;
    if (r < n && arr[r] < arr[maxId])
        maxId = r;
    if (maxId != i)
    {
        swap(arr[i], arr[maxId]);
        maxHeap(arr, n, maxId);
    }
}
void heapSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i =( n / 2 )- 1; i >= 0; i--)
    {
        maxHeap(arr, n, i);
    }
    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        maxHeap(arr, i, 0);
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    heapSort(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}