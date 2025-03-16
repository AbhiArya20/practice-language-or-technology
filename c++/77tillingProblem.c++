#include <bits/stdc++.h>
using namespace std;

// Given a board of 2*n and a tile 2*1 find out the number of ways to tile can be place of board.

int substring(int a)
{

    if (a <= 1)
        return a;

    int sum = 0;
 
    sum += substring(a - 1) + substring(a - 2) ;

    return sum;
}
int main()
{

    int a;
    cin >> a;
    cout << substring(a);
}