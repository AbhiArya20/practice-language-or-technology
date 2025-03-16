#include <bits/stdc++.h>
using namespace std;

//   *   *   *
//  * * * * *
// *   *   *   
int main()
{
    int column;
    cin >> column;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i == 0 && j % 4 == 2)
                cout << "*";
            else if (i == 1 && j % 2 == 1)
                cout << "*";
            else if (i == 2 && j % 4 == 0)
                cout << "*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}