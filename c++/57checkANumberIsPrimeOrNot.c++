#include <bits/stdc++.h>
using namespace std;
// Given an number find the all prime number till that number.

int main()
{
    int n;
    cin >> n;

    vector<int> check(n);
    for (int i = 2; i <= n; i++)
    {
        if (check[i] == 0)
        {
            for (int j = i * i; j < n; j += i)
            {

                check[j] = 1;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (check[i] == 0)
            cout << i << " ";
    }
}