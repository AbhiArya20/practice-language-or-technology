#include <bits/stdc++.h>
using namespace std;
// 1 1 1 1 1
// 2 2 2 2
// 3 3 3
// 4 4 
// 5 
int main(){
       
    int rowORcolumn;
    cin>>rowORcolumn;

     for (int i = 1; i<=rowORcolumn; i++)
     {
         for (int j =1 ; j<=rowORcolumn-i+1; j++)
         {
           cout<<i;
         }
         cout<<endl;
     }
}