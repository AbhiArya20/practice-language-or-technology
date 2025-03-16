#include <bits/stdc++.h>
using namespace std;

// Given two number find the number of count of bit differences in binary representation of both number.
int getbit(int n, int pos)
{
    return (n & (1 << pos));
}

int main()
{
    int x, y;
    cin >> x >> y;
    int counter = 0;
    for (int i = 0; i < 32; i++)
    {
        if (getbit(x, i) != getbit(y, i))
        {
            counter++;
        }
    }
    cout<<counter;
}