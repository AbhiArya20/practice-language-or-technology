#include <bits/stdc++.h>
using namespace std;

//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

int main()
{
    int rowORcolumn;
    cin >> rowORcolumn;

    for (int i = rowORcolumn; i >= 1; i--)
    { 
        
        for (int j = 1; j <= i-1; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= 2*(rowORcolumn-i)+1  ; j++)
        {
            cout<<"*";
        }
        cout << endl;
    }
    for (int i = 1; i <= rowORcolumn; i++)
    { 
        
        for (int j = 1; j < i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= 2*(rowORcolumn-i)+1  ; j++)
        {
            cout<<"*";
        }
       
        cout << endl;
    }
}