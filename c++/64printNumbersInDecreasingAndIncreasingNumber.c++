#include <bits/stdc++.h>
using namespace std;
// Given number N print in increasing and decreasing order using recursion.

void number(int n)
{
   if(n==0)
   return;

   number(n-1);
   cout<<n<<" ";

}
int main()
{
    int n;
    cin >> n;

    number(n);
}