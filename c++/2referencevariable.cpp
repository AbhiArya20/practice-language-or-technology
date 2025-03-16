#include <iostream>
using namespace std;
int &swap(int &a, int &b)
{
    int temp = a;

    a = b;
    b = temp;
    return a;
}
int main()
{
    int x = 34;
    int &y = x; //reference variable y==x

    int a = 2, b = 4;
    cout << x << endl;
    cout << y << endl;
    swap(a, b) = 45;
    cout << "the value of x is " << a << " the value of b is " << b << endl;
}
