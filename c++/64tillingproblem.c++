#include <iostream>
using namespace std;

int Count(int n)
{
    if (n == 1)
        return 1;
    if (n < 1)
        return 0;
    return (Count(n - 1) + Count(n - 2));
}
int main()
{
    int n;
    cin >> n;
    cout << Count(n);
}