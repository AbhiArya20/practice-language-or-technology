//medium


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rowORcolumn;
    cin >> rowORcolumn;

    for (int i = rowORcolumn - 1; i >= 0; i--)
    {
        for (int j = 0; j < rowORcolumn; j++)
        {
            if (i > j)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
}