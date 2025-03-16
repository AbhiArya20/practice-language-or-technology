#include <bits/stdc++.h>
using namespace std;
int evaluation(string st)
{
    stack<int> stak;
    for (int i = st.size() - 1; i >= 0; i--)
    {
        if (st[i] >= '0' && st[i] <= '9')
            stak.push(st[i]-'0');
        else
        {
            int op1 = stak.top();
            stak.pop();
            int op2 = stak.top();
            stak.pop();
            switch (st[i])
            {
            case '+':
                stak.push(op1 + op2);
                break;
            case '-':
                stak.push(op1 - op2);
                break;
            case '*':
                stak.push(op1 * op2);
                break;
            case '/':
                stak.push(op1 / op2);
                break;
            case '^':
                stak.push(pow(op1, op2));
                break;
            }
        }
    }
    return stak.top();
}
int main()
{
    string st;
    cin >> st;

    cout << evaluation(st);
}