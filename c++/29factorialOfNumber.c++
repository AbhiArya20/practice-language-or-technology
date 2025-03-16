#include <bits/stdc++.h>
using namespace std;
int main()
{
    int toPrint;
    cin >> toPrint;
    int ans=1;

    for (int i = toPrint; i>1; i--)
    {
        ans=ans * i;
    }
    cout<<ans;
}
