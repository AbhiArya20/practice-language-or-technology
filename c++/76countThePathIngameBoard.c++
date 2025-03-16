#include <bits/stdc++.h>
using namespace std;

// count the number of path possible from a starting point to a destination in snake game board.

int substring(int a, int b)
{
    if (a == b)
        return 1;
    if (a > b)
        return 0;
    int sum = 0;
    for (int i = 1; i <= 6; i++)
    {
        sum += substring(a + i, b);
    }
    return sum;
}
int main()
{

    int a, b;
    cin >> a>> b;
    cout << substring(a, b);
}