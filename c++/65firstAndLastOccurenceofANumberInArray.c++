#include <bits/stdc++.h>
using namespace std;
// Given array of size N find out index of first and last occurence of a number using recursion.

bool first(int arr[], int n, int i, int key)
{
    if (n == i)
        return -1;

    if (arr[0] == key)
        return i;

    return first(arr, n, i + 1, key);
}
bool second(int arr[], int n, int i, int key)
{
    if (n == i)
        return -1;

    int rest = second(arr, n, i + 1, key);
    if (rest != -1)
        return rest;

    if (arr[i] == key)
        return i;

    return -1;
}
int main()
{
    int n, key;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << first(arr, n, 0, key) << endl;
    cout << second(arr, n, 0, key) << endl;
}