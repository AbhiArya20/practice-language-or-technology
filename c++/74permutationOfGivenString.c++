#include <bits/stdc++.h>
using namespace std;

// generate all permutation of a given string.

void substring(string first, string ans)
{
    if (first.size() == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < first.size(); i++)
    {
        char start = first[i];
        string rest = first.substr(0,i)+first.substr(i+1);
        substring(rest, ans+start);
    }
}
int main()
{
    string arr;
    cin >> arr;
    substring(arr, "");
}