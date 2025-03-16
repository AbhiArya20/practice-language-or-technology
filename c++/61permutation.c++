#include <iostream>
using namespace std;

void purmutation(string str, string ans)
{
    if (str.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < str.length(); i++)
    {

        char ch = str[i];
        string rest = str.substr(0,i)+str.substr(i+1);

        purmutation(rest, ans+ch);
    }
}
int main()
{
    string str;
    cin >> str;
    string ans = "";
    purmutation(str, ans);
}