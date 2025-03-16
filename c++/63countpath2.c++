#include <iostream>
using namespace std;

int Count(int n, int i, int j)
{
    
    if (i == n - 1 && j == n - 1)
        return 1;
    if (i > n-1 || j > n - 1)
        return 0;
    int count = 0;
   return (Count(n, i + 1, j) + Count(n, i , j + 1));

   
}
int main()
{
    int n;
    cin >> n;
    cout << Count(n, 0, 0);
}