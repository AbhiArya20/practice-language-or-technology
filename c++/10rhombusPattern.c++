#include <bits/stdc++.h>
using namespace std;
//     *****
//    *****
//   *****
//  *****
// *****

int main()
{
    int rowORcolumn;
    cin >> rowORcolumn;
    for (int i = rowORcolumn; i >= 1; i--)
    {
        int column = 2 * rowORcolumn - 1;
        for (int j = 1; j <= column; j++)
        {
            if (j < i)
                cout << " ";
            else if(j>=i+rowORcolumn)
            cout<<" ";
            else
                cout << "*";
            
        }
        cout << endl;
    }
}