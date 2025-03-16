#include <bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>> maxi;
priority_queue<int, vector<int>, greater<int>> mini;

float median(int a)
{
   
    if (maxi.size() == mini.size())
    {
        if (maxi.size() == 0)
        {
            maxi.push(a);
            return maxi.top();
        }
        else if (maxi.top()>a)
        {
            maxi.push(a);
        }
        else
        {
            mini.push(a);
        }
        
    }
    else if (maxi.size() > mini.size())
    {    if (maxi.top()>=a)
        {
           mini.push(a);
        }
        else
        {
            int temp= maxi.top();
            maxi.pop();
            mini.push(temp);
            maxi.push(a);
        }
    } 
    
    else
    {    
        if (mini.top()>=a)
        {
           maxi.push(a);
        }
        else
        {
            int temp= mini.top();
            mini.pop();
            maxi.push(temp);
            mini.push(a);
        }
    } 
    if (maxi.size() == mini.size())
        return (float) (maxi.top() + mini.top()) / 2;
    else if (maxi.size() > mini.size())
            return maxi.top();
        else
            return mini.top();
    
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << median(arr[i]) << " ";
    }
}