#include <bits/stdc++.h>
using namespace std;
// given a char Array check it is palidrome or not
int main()
{
    int n;
    cin >> n;

    char arr[n + 1];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    int j = n-1;
    bool ans=true;
    while (i <= j)
    {
        if (arr[i] != arr[j])
        {
           ans=false;
        }
        i++;
        j--;
    }
    cout <<ans;
}