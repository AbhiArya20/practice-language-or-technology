#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp.size() == k && mp[arr[i]] == 0)
            break;
        mp[arr[i]]++;
    }
    map<int, int>::iterator it;
    vector<pair<int, int>> vii;
    for (it = mp.begin(); it != mp.end(); it++)
    {
       
            pair<int, int> p;
            p.second = it->first;
            p.first = it->second;
            vii.push_back(p);

    }
    sort(vii.begin(), vii.end(), greater<pair<int,int>>());
    vector<pair<int, int>>::iterator vi;
    for (vi = vii.begin(); vi != vii.end(); vi++)
    {
        cout << vi->second << " " << vi->first << " "<<endl;
    }
}