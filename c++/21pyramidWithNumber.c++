#include<bits/stdc++.h>
using namespace std;
//     1 
//    2 2
//   3 3 3
//  4 4 4 4
// 5 5 5 5 5
int main(){
    int rowOrColumn;
    cin>> rowOrColumn;
int space= (2*rowOrColumn-1)/2;
    for (int i = 1; i <= rowOrColumn; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            cout<<" ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
        space--;
    }
    
}