#include <bits/stdc++.h>
using namespace std;
// *      *
// **    **
// * *  * *
// *  **  *
// *  **  *
// * *  * *
// **    **
// *      *
int main(){
        int rowORcolumn;
        cin>>rowORcolumn;
        for (int i = 1; i<=rowORcolumn; i++)
        {
         for (int j =1 ; j<=2*rowORcolumn; j++)
         {
            if(j==1 || j==2*rowORcolumn || i==j || j== 2*rowORcolumn-i+1)
            cout<<"*";
            else
            cout<<" ";
         }
         cout<<endl;
        }
        for (int i = rowORcolumn ; i>=1; i--)
        {
         for (int j =1 ; j<=2*rowORcolumn; j++)
         {
            if(j==1 || j==2*rowORcolumn || i==j || j== 2*rowORcolumn-i+1)
            cout<<"*";
            else
            cout<<" ";
         }
         cout<<endl;
        }

}