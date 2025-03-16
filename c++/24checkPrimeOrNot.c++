#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cin >> number;
    bool flag = true;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
            flag = false;
    }
    if (flag == true)
        cout << "YES";
    else
        cout << "NO";
}
