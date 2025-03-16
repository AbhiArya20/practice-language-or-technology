#include <bits/stdc++.h>
using namespace std;
// Given a string in any case convert into upper and lower.
int main()
{
    string st;
    cin >> st;

    // to upper
    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] >= 'a' && st[i] <= 'z')
            st[i] = st[i] - 32;
    }

    cout << st << endl;

    // to lower

    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] >= 'A' && st[i] <= 'Z')
            st[i] = st[i] + 32;
    }

    cout << st << endl;

    transform(st.begin(), st.end(), st.begin(), ::toupper);
    cout << st << endl;

    transform(st.begin(), st.end(), st.begin(), ::tolower);
    cout << st << endl;
}