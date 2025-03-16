#include <bits/stdc++.h>
using namespace std;
// Given an number find the all prime factorisation till that number.

int main()
{
    int n;
    cin >> n;

    vector<int> check(n);
    for (int m = 2; m <= n; m++)
    {
        check[m]=m;
    }
    
    for (int i = 2; i <= n; i++)
    {
        if (check[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if(check[j]==j)
                    check[j] = i;
            }
        }
    }
   
    
    while (n!=1)
    {
        cout<<check[n]<<" ";
        n=n/check[n];
    }
    

    
}