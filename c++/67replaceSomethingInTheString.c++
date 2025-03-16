#include <bits/stdc++.h>
using namespace std;

// Given a string replace pi with 3.14 using recursion.
void reverse(string st)
{
    if (st.size() == 0)
        return;
    if(st[0]=='p' && st[1]=='i'){
    cout<<"3.14";
    reverse(st.substr(2));
    }
    else{
    cout<<st[0];
    reverse(st.substr(1));
    }
}
int main()
{
    string st;
    cin >> st;

    reverse(st);
}