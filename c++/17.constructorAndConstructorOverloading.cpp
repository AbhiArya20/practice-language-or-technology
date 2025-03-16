#include <iostream>
using namespace std;
class complex
{
    int a, b, x, y;

public:
    complex(); //default constructor
    void print()
    {
        cout << "the complex is " << a << "+" << b << "i" << endl;
    }
    complex(int, int);//parameterize constructor
    complex(int x)//parameterize constructor
    {
        a = x;
        b = 0;
    }
};
complex::complex()
{
    a = 10;
    b = 20;
}
complex::complex(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    complex c1, c2, c3;
    c1.print();
    c2.print();
    c3.print();

    // implicit method
    complex a(1, 5);
    a.print();
    //explicit method
    complex b = complex(3, 4);
    b.print();
    complex c = complex(3);
    c.print();
}