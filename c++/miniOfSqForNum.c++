#include <bits/stdc++.h>
using namespace std;
int arr[1000];
int m(int key)//memorization
{
    if (key <= 3)
        return key;

    if (arr[key] != INT_MAX)
        return arr[key];

    for (int i = 1; i * i <= key; i++)
    {
        arr[key] = min(arr[key], 1 + m(key - i * i));
    }
    return arr[key];
}

int main()
{
    for (int n = 0; n < 1000; n++)
    {
        arr[n] = INT_MAX;
    }

    int key;
    cin >> key;
    cout << m(key);
}