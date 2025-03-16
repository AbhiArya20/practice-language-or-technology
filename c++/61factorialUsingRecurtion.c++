#include <bits/stdc++.h>
using namespace std;
// Given a number N and find out the factorial using recursion.

int number(int n)
{
    if (n <= 1)
        return 1;
    return n * number(n - 1);
}
int main()
{
    int n;
    cin >> n;

    cout << number(n);
}