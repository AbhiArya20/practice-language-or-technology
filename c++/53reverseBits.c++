#include <bits/stdc++.h>
using namespace std;

// Given a number find out number after reversing the bits in 32bits integer.

int main()
{
    unsigned int n;
    cin >> n;

    unsigned ans = 0;
    for (int i = 0; i < 32; i++)
    {
        int temp = (n & (1 << i));
        if (temp)
            ans = ans | (1 << (31 - i));
    }
    cout << ans;
}