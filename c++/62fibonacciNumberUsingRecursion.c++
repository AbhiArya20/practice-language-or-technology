#include <bits/stdc++.h>
using namespace std;
// Given a number N and find out the fibonacci number using recursion.

int number(int n)
{
    if (n <= 1)
        return n;
    return  number(n - 1)+number(n-2);
}
int main()
{
    int n;
    cin >> n;

    cout << number(n);
}