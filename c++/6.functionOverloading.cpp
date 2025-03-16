#include <iostream>
using namespace std;
int sum(int x, int y)
{
    return x + y;
}
int sum(int x, int y, int z)
{
    return x + y + z;
}
int main()
{
    int a, b, c;
    cout << "enter a b c" << endl;
    cin >> a >> b >> c;
    cout << " the sum of a and b is " << sum(a, b) << endl;
    cout << " the sum of a,b and c is " << sum(a, b, c) << endl;
}