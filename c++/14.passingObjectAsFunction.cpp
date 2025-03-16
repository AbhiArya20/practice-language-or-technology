#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    int setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    int sum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void print()
    {
        cout << "the 1st complex is " << a << "+" << b << "i" << endl;
    }};
    int main()
    {

        complex abhi, vivek, ankit;
        abhi.setdata(4, 5);
        abhi.print();
        vivek.setdata(3, 6);
        vivek.print();
        ankit.sum(abhi ,vivek );
        ankit.print();
    }