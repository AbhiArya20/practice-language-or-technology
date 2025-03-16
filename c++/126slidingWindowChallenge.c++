#include <bits/stdc++.h>
using namespace std;
bool isPal(int arr[], int st, int en)
{
    while (st < en)
    {
        if (arr[st] != arr[en])
            return false;
        st++;
        en--;
    }
    return true;
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
    int k;
    cin >> k;

    int start = 0, end = k - 1;
    if (isPal(arr, start, end))
    {
        cout << start << " " << end;
        return 0;
    }
    start++;
    end++;
    for (int i = start, j = end; j < n; i++, j++)
    {
        if (isPal(arr, i, j))
        {
            cout << i << " " << j;
        }
    }
}