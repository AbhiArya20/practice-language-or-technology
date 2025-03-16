#include <bits/stdc++.h>
using namespace std;
int precedence(char ch)
{
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '+' && ch == '-')
        return 1;
    else
        return -1;
}
string convert(string st)
{
    string toReturn = "";
    stack<char> stak;
    for (int i = 0; i < st.size() ; i++)
    {
        if ((st[i] >= 'a' && st[i] <= 'z') || (st[i] >= 'A' && st[i] <= 'Z'))
            toReturn += st[i];
        else if (st[i] == '(')
            stak.push(st[i]);
        else if (st[i] == ')')
        {
            while (!stak.empty() && stak.top() != '(')
            {
                toReturn += stak.top();
                stak.pop();
            }
            if (!stak.empty())
                stak.pop();
        }
        else
        {
            while (!stak.empty() && precedence(stak.top()) > precedence(st[i]))
            {
                toReturn += stak.top();
                stak.pop();
            }
            stak.push(st[i]);
        }
    }
    while (!stak.empty())
    {
        toReturn += stak.top();
        stak.pop();
    }

    return toReturn;
}
int main()
{
    string st;
    cin >> st;
    cout << convert(st);
}