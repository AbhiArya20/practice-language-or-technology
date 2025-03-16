#include <iostream>
using namespace std;

void substring(string str, string ans)
{
    if (str.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = str[0];
    string rest = str.substr(1);
    substring(rest, ans);
    substring(rest, ans + ch);
}
int main()
{
    string str;
    cin >> str;
    string ans = "";
    substring(str, ans);
}