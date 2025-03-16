#include <bits/stdc++.h>
using namespace std;
// generate all substring of a given string.

void substring(string st, string ans)
{
    if (st.size() == 0)
    {
        cout << ans << endl;
        return;
    }
    char start = st[0];
    string rest = st.substr(1);
    substring(rest, ans);
    substring(rest, ans + start);
}
int main()
{
    string st;
    cin >> st;

    substring(st, "");
}