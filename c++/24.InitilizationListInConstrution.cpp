#include <iostream>
using namespace std;
class test
{
    int a, b;

public:
    test(int i, int j) : a(i), b(a+j)
    {
        cout << "constructor executed" << endl;
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
    }
};
int main()
{
    test er(1, 3);
    return 0;
}
