#include <iostream>
using namespace std;
class Base1
{
public:
    void greet()
    {
        cout << "how are you" << endl;
    }
};
class Base2
{
public:
    void greet()
    {

        cout << "kese ho" << endl;
    }
};
class Derived : public Base1, public Base2
{
    int a;
    public:
    void greet()
    {
        Base1::greet();
    }
};
int main()
{
    Base1 obj1;
    Base2 obj2;
    Derived obj;
    obj1.greet();
    obj2.greet();
    obj.greet();
}
