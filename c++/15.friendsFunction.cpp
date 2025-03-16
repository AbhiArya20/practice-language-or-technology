#include <iostream>
using namespace std;
class complex
{
    int a, b;
    friend complex sum3(complex o1, complex o2);

public:
    int setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void print()
    {
        cout << "the 1st complex is " << a << "+" << b << "i" << endl;
    }
};

complex sum3(complex o1, complex o2)
{
    complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
   
    complex abhi, vivek,s;
    abhi.setdata(4, 5);
    abhi.print();
    vivek.setdata(3, 6);
    vivek.print();
    s = sum3(abhi, vivek);
    s.print();
}