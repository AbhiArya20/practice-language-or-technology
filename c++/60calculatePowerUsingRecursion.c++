#include <bits/stdc++.h>
using namespace std;
// Given a number N and power P find out the power using recursion.

int number(int n, int p)
{
    if (p == 1)
        return n;
    return n * number(n, p - 1);
}
int main()
{
    int n, p;
    cin >> n >> p;

    cout << number(n, p);
}