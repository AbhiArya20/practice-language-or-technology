#include <bits/stdc++.h>
using namespace std;

// Given a board of 2*n and a tile 2*1 find out the number of ways to tile can be place of board.

int countFriendsPairings(int n)
{
    if (n <= 2)
        return n;

    return countFriendsPairings(n - 1) + (countFriendsPairings(n - 2) * (n - 1));
}
int main()
{

    int a;
    cin >> a;
    cout << countFriendsPairings(a);
}