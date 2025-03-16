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
    // 12 0 1 0 1 2 1 0 1 3 2 1 2 1

    int i = 0;
    int ans = 0;
    stack<int> st;
    while (i < n)
    {
        while (!st.empty() && arr[st.top()] < arr[i])
        {
            int height= arr[st.top()];
            st.pop();
            if(st.empty()){
                break;
            }
            int  len=i- st.top()-1;
            ans+=(min(arr[st.top()],arr[i])- arr[height])* len;
        }

        st.push(i);
        i++;
    }

    cout << ans;
}