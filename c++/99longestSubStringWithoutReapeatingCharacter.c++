#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    cin >> st;

    int start = -1;
    vector<int> arr(256, -1);
    int maxi = 0;
    for (int i = 0; i < st.size(); i++)
    {
        if (arr[st[i]] > start)
            start = arr[st[i]];
        arr[st[i]] = i;
        maxi=max(maxi, i-start);
    }

    cout<<maxi;
    
    
}