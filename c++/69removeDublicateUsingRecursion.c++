#include <bits/stdc++.h>
using namespace std;

// Given an string remove the contunues dublicates.

string reverse(string st)
{
    if (st.size() == 0)
        return "";
     
    
    char start= st[0];
    string rest= reverse(st.substr(1));

    if(rest[0]==start)
    return rest;
    return start+rest;

        
}
int main()
{
    string st;
    cin >> st;

    cout<<reverse(st);
}