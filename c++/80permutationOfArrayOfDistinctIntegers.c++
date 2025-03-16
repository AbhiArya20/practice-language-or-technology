#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;
void perm(vector<int> &arr, int j)
{
    if (j == arr.size())
    {
        ans.push_back(arr);
        return;
    }
    //remove dublicates
    for (int i = j; i < arr.size(); i++)

    {
        if (arr[i] == arr[j] && i != j)
            continue;
        swap(arr[i], arr[j]);
        perm(arr, j + 1);
        swap(arr[i], arr[j]);
    }
    //simple permutation with dublicates.
    // for (int i = j; i < arr.size(); i++)

    // {
    //     if (arr[i] == arr[j] && i != j)
    //         continue;
    //     swap(arr[i], arr[j]);
    //     perm(arr, j + 1);
    //     swap(arr[i], arr[j]);
    // }
    return;
}
int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    perm(arr, 0);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    sort(arr.begin(),arr.end());
    // do
    // {
    //    for (int i = 0; i < n; i++)
    //    {
    //        cout<<arr[i]<<" ";
    //    }
    //    cout<<endl;

    // } while (next_permutation(arr, arr+n));
}
