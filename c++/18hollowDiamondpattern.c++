#include <bits/stdc++.h>
using namespace std;

//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *

int main()
{
    int rowORcolumn;
    cin >> rowORcolumn;
    int space=(2 * rowORcolumn-1)/2;
    for (int j = 1; j <= rowORcolumn; j++)
    {
        for (int i = 0; i < space; i++)
        {
            cout<<" ";
        }
        for (int i = 1; i <= 2*j-1; i++)
        {
            if(i==1 || i==2*j-1)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
        space--;
    }
    space =0;
    for (int j = rowORcolumn; j>=1; j--)
    {
        for (int i = 0; i < space; i++)
        {
            cout<<" ";
        }
      
        for (int i = 1; i <= 2*j-1; i++)
        {
            if(i==1 || i==2*j-1)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
        space++;
        
    }
}