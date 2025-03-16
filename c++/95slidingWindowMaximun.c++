#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);

    for (auto &i : arr)
    {
        cin>>i;
    }
    
    int k; cin>>k;


vector<int>ans;
    int maxi=INT_MIN;
    for (int i = 0; i < k; i++)
    {
        maxi=max(maxi,arr[i]);
    }
    ans.push_back(maxi);
    for (int i = k; i < n; i++)
    {
        maxi=max(maxi,arr[i]);
        ans.push_back(maxi);
    }
    
    for (auto i : ans)
    {
        cout<<i<<" ";
    }
    
}