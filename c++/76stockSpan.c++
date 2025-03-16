#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {100, 80, 60, 70, 60, 75, 85};

    vector<int>ans;
    stack<pair<int, int>> st;

    for (auto i : arr)
    {
        int count = 1;
        while (!st.empty() and st.top().first <= i)
        {
            count += st.top().second;
            st.pop();
        }
        st.push({i, count});
        ans.push_back(count);
    }

    for (auto i : ans)
    {
        cout << i<<" ";
    }
}