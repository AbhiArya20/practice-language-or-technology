#include <iostream>
using namespace std;
class student
{

public:
    int a;
   virtual void getdata()
    {
        cout << " Roll number: " << a << endl;
    }
};
class marks: public student
{

public:
    int b=56;
    void getdata()
    {
        cout << " marks: " << b << endl;
    }
};

int main()
{

    student *ptr;
    student objst;
    marks objmk;
    ptr= &objmk;
    ptr->a=32;
    ptr->getdata();
}
