#include <bits/stdc++.h>
using namespace std;

// TOWER OF HANOI.

void reverse(int n, char s, char h, char d)
{
    if (n == 0)
        return;
    reverse(n - 1, s, d, h);
    cout << s << d << " ";
    reverse(n-1, h, s, d);
}
int main()
{
    char s, h, d;
    cin >> s>> h>> d;
    reverse(3, s, h, d);
}