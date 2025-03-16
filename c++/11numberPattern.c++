#include <bits/stdc++.h>
using namespace std;
//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5

int main()
{
    int rowORcolumn;
    cin >> rowORcolumn;

    int column= 2*rowORcolumn-1;
    for (int i = 1; i <=rowORcolumn; i++)
    {
        int k= i;
        for (int j = 0; j < rowORcolumn-i; j++)
        {
            cout<<" ";
        }

        for (int j = 1  ; j <=i ; j++)
        {
            cout<<j<<" ";
        }
        
        
        cout << endl;
    }
}
