#include<bits/stdc++.h>
using namespace std;

int main(){
    int rowOrColumn;
    cin>> rowOrColumn;
    int space= (2*rowOrColumn-1)/2;
    for (int i = 1; i <= rowOrColumn; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            cout<<"*";
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            if(j==1 || j==2*i-1)
            cout<<"*";
            else
            cout<<" ";
        }
        for (int j = 1; j <= space; j++)
        {
            
            cout<<"*";
        }
        cout<<endl;
        space--;
    }
    space=0;
    for (int i = rowOrColumn; i>=1; i--)
    {
           for (int j = 1; j <= space; j++)
        {
            cout<<"*";
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            if(j==1 || j==2*i-1)
            cout<<"*";
            else
            cout<<" ";
        }
        for (int j = 1; j <= space; j++)
        {
            
            cout<<"*";
        }
        cout<<endl;
        space++;
    }
    
}