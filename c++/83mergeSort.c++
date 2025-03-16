#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1 + 1];
    int R[n2 + 1];

    for (int i = 1; i <= n1; i++)
    {
        L[i] = arr[p + i-1];
    }
    for (int i = 1; i <= n2; i++)
    {
        R[i] = arr[q + i];
    }
    L[n1 + 1] = INT_MAX;
    R[n2 + 1] = INT_MAX;

    int i = 1;
    int j = 1;
    for (int k = p; k <= r; k++)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
    }
}
void mergeSort(int arr[], int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        mergeSort(arr, p, q);
        mergeSort(arr, q + 1, r);
        merge(arr, p, q, r);
    }
}
int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, 1, n );

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}