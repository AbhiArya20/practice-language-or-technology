#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (auto &i : arr)
    {
        cin >> i;
    }

    // brute force
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int length = arr[i];
        for (int j = i; j < n; j++)
        {
            length = min(arr[j], length);
            int width = j - i + 1;
            ans = max(ans, length * width);
        }
    }
    cout << ans << endl;

    //using stack

    stack<int> st;
    int ans2 = INT_MIN;       
    int i = 0;
    while (i < n)
    {
        while (!st.empty() && arr[st.top()] > arr[i])
        {
            int height = arr[st.top()];
            st.pop();
            if (st.empty())
                ans2 = max(ans, height * i);
            else
            {
                int width= i-st.top()-1;
                ans2=max(ans, height* width);
            }
        }
        st.push(i);
        i++;
    }
    cout << ans2;
}