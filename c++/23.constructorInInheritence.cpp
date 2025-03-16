#include <iostream>
using namespace std;
class Base1
{
    int data1;

public:
    Base1() {}
    Base1(int x)
    {
        data1 = x;
        cout << "Base1 class constructor called";
    }
    void print()
    {
        cout << "the value of data1 is " << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int y)
    {
        data2 = y;
        cout << "Base2 class constructor called";
    }
    void print1()
    {
        cout << "the value of data2 is " << data2 << endl;
    }
};
class derived : public Base1, public Base2
{
    int data3, data4;

public:
    derived(int a, int b, int c, int d) : Base1(a), Base2(b) //execution in line Base1-Base2-derived
    {                                                        //if any virtual base class is called then that will execute first

        data3 = c;
        data4 = d;
        cout << "derived class called" << endl;
    }
    void print2()
    {
        cout << "the value data3 is " << data3 << endl;
        cout << "the value data4 is " << data4 << endl;
    }
};

int main()
{
    derived Abhi(1, 2, 4, 5);
    Abhi.print();
    Abhi.print1();
    Abhi.print2();
}