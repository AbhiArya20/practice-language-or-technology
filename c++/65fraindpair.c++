#include <iostream>
using namespace std;

int Count(int n)
{
    if (n <= 2)
    return n;

    return (Count(n - 1) + Count(n - 2)*(n-1));
}
int main()
{
    int n;
    cin >> n;
    cout << Count(n);
}