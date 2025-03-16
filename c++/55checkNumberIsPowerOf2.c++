#include <bits/stdc++.h>
using namespace std;
// Check given number is power of 2 or not.
int getbit(int n, int pos)
{
    return (n & (1 << pos));
}

int main()
{
    int x;
    cin >> x;

    if (!(x & (x - 1)))
        cout << "YES";
    else
        cout << "NO";
}