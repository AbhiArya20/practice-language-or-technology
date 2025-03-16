#include <bits/stdc++.h>
using namespace std;

int main(){
       int rowORcolumn;
     cin>>rowORcolumn;

     for (int i = rowORcolumn; i>0; i--)
     {
         for (int j = 0; j < i; j++)
         {
           cout<<"*";
         }
         cout<<endl;
     }
}