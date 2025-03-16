#include <bits/stdc++.h>
using namespace std;

// generate all combimnation with any two keypad value.

void substring(string first, string second)
{
    if (first.size() == 0 || second.size() == 0)
    {
        return;
    }

    for (int i = 0; i < second.size(); i++)
    {
        cout << first[0] << second[i] << endl;
    }

    substring(first.substr(1), second);
}
int main()
{
    string arr[10] = {"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int a, b;
    cin >> a >> b;

    substring(arr[a], arr[b]);
}