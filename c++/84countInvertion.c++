#include <bits/stdc++.h>
using namespace std;
// Given an array you have to count if arr[i]>arr[j] and i<j.

long long merge(int arr[], int p, int q, int r)
{
    long long counter = 0;
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1 + 1];
    int R[n2 + 1];

    for (int i = 1; i <= n1; i++)
    {
        L[i] = arr[p + i - 1];
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
            counter += (n1 - i+1);
            j++;
        }
    }
    return counter;
}
long long mergeSort(int arr[], int p, int r)
{
    long long counter = 0;
    if (p < r)
    {
        int q = (p + r) / 2;
        counter += mergeSort(arr, p, q);
        counter += mergeSort(arr, q + 1, r);
        counter += merge(arr, p, q, r);
    }
    return counter;
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

    cout << mergeSort(arr, 1, n);
}