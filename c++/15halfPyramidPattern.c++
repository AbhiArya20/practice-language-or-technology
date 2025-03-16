#include <bits/stdc++.h>
using namespace std;


// *
// **
// ***
// ****
int main(){
     int rowORcolumn;
     cin>>rowORcolumn;

     for (int i = 0; i < rowORcolumn; i++)
     {
         for (int j = 0; j <=i; j++)
         {
             cout<<"*";
         }
         cout<<endl;
     }
     
}