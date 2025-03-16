#include <iostream>
using namespace std;
class complex
{
    int a=0;

public:
    complex(){}; //default constructor
    complex(int num)
    {
         a = num;
    }
    complex(complex &obj)//copy constructor
    {
        cout << "copy constructor" << endl;
        a = obj.a;
    }
    void print()
    {
        cout << "the complex is " << a << endl;
    }
};

int main()
{
    complex c1, c2(56), c3(45);
    c1.print();
    c2.print();
    c3.print();
    
    complex c4(c3);
    c4.print();
    c4 = c3;
    c4.print();
    complex c5 = c2;
    c5.print();
}