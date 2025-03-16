#include <bits/stdc++.h>
using namespace std;
//     *****
//    *   *
//   *   *
//  *   *
// *****

int main()
{
    int rowORcolumn;
    cin >> rowORcolumn;
    int column = (2 * rowORcolumn - 1)/2;
    for (int i =1; i <=rowORcolumn; i++)
    {
        
        for (int j = 1; j <= column; j++)
        {
           cout<<" ";
        }
        for (int j = 1; j <= rowORcolumn; j++)
        {
            if(i==1||i==rowORcolumn)
            cout<<"*";
            else if(j==1 || j == rowORcolumn)
            cout<<"*";
            else cout<<" ";
        }
        
        cout << endl;
        column--;
    }
}