#include <bits/stdc++.h>
using namespace std;
// Given an unsorted positive array and key if array has subarray of sum equal to key print index of array.
int main()
{
    int n;
    cin >> n;
    int att[n];
    for (int i = 0; i < n; i++)
    {
        cin >> att[i];
    }
    int s;
    cin >> s;

    int i = 0, j = 0, sum = 0, st = -1, en = -1;
    while (j < n && sum + att[j] <= s)
    {
        sum += att[j];
        j++;
    }
    if (sum == s)
    {
        cout << i << " " << j;
        return 0;
    }
    while (j < n)
    {
        sum += att[j];
        while (sum > s)
        {
            sum -= att[i];
            i++;
        }
        if (sum == s)
        {
            st = i;
            en = j;
            break;
        }
        j++;
    }

    cout << st << " " << en;
    // for (int i = 0; i < n; i++)
    // {
    //     int sum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         sum = sum + att[j];
    //         if (sum == s)
    //         {
    //             cout<<i<<" "<<j;
    //             return 0;
    //         }
    //     }
    // }
}