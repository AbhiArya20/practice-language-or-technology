#include <bits/stdc++.h>
using namespace std;
//         1
//       2 1 2
//     3 2 1 2 3 
//   4 3 2 1 2 3 4 
// 5 4 3 2 1 2 3 4 5

int main()
{
    int rowORcolumn;
    cin >> rowORcolumn;

    for (int i = 1; i <= rowORcolumn; i++)
    { 
        int k= i;
        for (int j = 1; j <= rowORcolumn-i; j++)
        {
            cout<<"  ";
        }
        for (int j = k; j > 1  ; j--)
        {
            cout<<j<<" ";
        }
        k=1;
        for (int j = k; j <=i ; j++)
        {
            cout<<j<<" ";
        }
        cout << endl;
    }
}