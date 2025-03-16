#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rowOrColumn;
    cin >> rowOrColumn;
    int toprint = 1;
    for (int i = 0; i < rowOrColumn; i++)
    {
        for (int j = 1; j <= rowOrColumn-i; j++)
        {
            cout << " ";
        }
        
        for (int j = 0; j <= i; j++)
        {
            if (j==0 || 0== i)
            {
                toprint=1;
            }
            else
            {
               toprint= toprint*(i-j+1)/j;
            }
            cout<<toprint <<" ";
        }
    cout << endl;
    }

}

// 1
