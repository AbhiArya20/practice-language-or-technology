#include <bits/stdc++.h>
using namespace std;
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

int main()
{
    int rowORcolumn;
    cin >> rowORcolumn;
    for (int i = 1; i <= rowORcolumn; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == j || (i - j) % 2 == 0)
                cout << "1 ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}