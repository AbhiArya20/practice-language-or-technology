#include <bits/stdc++.h>
using namespace std;

// Given a string find out the maximum frequency.

int main()
{
    string st;
    cin >> st;
    map<char, int> mp;
    for (int i = 0; i < st.length(); i++)
    {
        mp[st[i]]++;
    }
    map<char, int>::iterator it;
    int i = 0;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        st[i] = it->first;
        i++;
    }
    cout << st.substr(0, i);
}