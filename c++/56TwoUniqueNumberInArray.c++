#include <bits/stdc++.h>
using namespace std;
//  Given an array find out the two numbers are uniqe ans all are repeated twice.

int getbit(int n, int pos)
{
    return (n & (1 << pos));
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int bothXOR = 0;
    for (int i = 0; i < n; i++)
    {
        bothXOR ^= arr[i];
    }
    int temp = bothXOR;
    int pos = 0;
    int bit = 0;
    while (bit != 1)
    {
        bit = bothXOR & 1;
        pos++;
        bothXOR >>= 1;
    }
    int oneOf = 0;
    for (int i = 0; i < n; i++)
    {
        int isBit = getbit(arr[i], pos - 1);
        if (isBit)
            oneOf ^= arr[i];
    }

    int secondOf = oneOf ^ temp;

    cout << oneOf << " " << secondOf;
}