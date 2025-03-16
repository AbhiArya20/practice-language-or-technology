#include<bits/stdc++.h>
using namespace std;
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
int main(){
    int rowORcolumn;
    cin>> rowORcolumn;

    for (int i = rowORcolumn; i >=0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<j+1;
        }
        cout<<endl;
    }
    
}