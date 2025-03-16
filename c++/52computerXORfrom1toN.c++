#include <bits/stdc++.h>
using namespace std;

// Given a number find out XOR from 1 to N;

int main()
{
    int st;
    cin >> st;
    int ans = 0;
    for (int i = 1; i <= st; i++)
    {
        ans = ans ^ i;
    }
    cout << ans << endl;
    if (st % 4 == 0)
    {
        cout << st;
        return 0;
    }
    if (st % 4 == 1)
    {
        cout << 1;
        return 0;
    }
    if (st % 4 == 2)
    {
        cout << st + 1;
        return 0;
    }
    else
    {
        cout << 0;
        return 0;
    }
}