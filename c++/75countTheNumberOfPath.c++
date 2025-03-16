#include <bits/stdc++.h>
using namespace std;

// count the number of path possible start of matrix to end.

int substring(int a, int b, int n)
{
    if (a == n && b == n)
        return 1;
    if (a > n || b > n)
        return 0;
    int sum = 0;
    
        sum += substring(a + 1, b, n);
        sum += substring(a, b + 1, n);
    

    return sum;
}
int main()
{

    cout << substring(0, 0, 2);
}