#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st = "dfsshg fgjh dfsh fgh";

    stack<string> s;
    string str = "";
    int i = 0;
    while (i <= st.size())
    {
        if (st[i] == ' ' || st[i]=='\0')
        {
            s.push(str);
            str = "";
            i++;
            continue;
        }
        str = str + st[i];
        i++;
    }

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}