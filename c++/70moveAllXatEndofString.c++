#include <bits/stdc++.h>
using namespace std;

// Given an string having x move them to the last of string.

string reverse(string st)
{
    if (st.size() == 0)
        return "";
    char start = st[0];
    string rest = reverse(st.substr(1));

    if ('x' == start)
        return rest + start;
    return start + rest;
}
int main()
{
    string st;
    cin >> st;

    cout<<reverse(st);
}