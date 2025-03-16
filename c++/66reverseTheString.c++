#include <bits/stdc++.h>
using namespace std;
// Given a string print out the in revese order using recursion.


void reverse(string st)
{
    if(st.size()==0)
    return;
    
    reverse(st.substr(1));
    cout<<st[0];
}
int main()
{
    string st;
    cin>> st;

    reverse(st);
}