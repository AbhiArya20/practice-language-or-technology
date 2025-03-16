#include <bits/stdc++.h>
using namespace std;
// Given a numerical string find out the biggest number that can be made.

int main()
{
    string st;
    cin >> st;

    int i = 0;
    int n = st.length() - 1;

    sort(st.begin(), st.end(), greater<char>());
    cout << st;
}