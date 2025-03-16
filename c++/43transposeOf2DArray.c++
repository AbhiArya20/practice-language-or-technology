#include <bits/stdc++.h>
using namespace std;


// Given an 2D array find out the transpose of array.
int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            cin >> arr[i][j];
        }
    }


   for (int i = 1; i <= n; i++)
   {
       for (int j= 1; j <=i ; j++)
       {
           swap(arr[i][j], arr[j][i]);
       }
       
   }
   
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }
}