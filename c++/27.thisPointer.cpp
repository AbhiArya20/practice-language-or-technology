#include <iostream>
using namespace std;
class student
{
    int a;

public:
    student& setdata(int a)
    {
       this-> a = a;
    }
    void getdata()
    {
        cout << "Roll number: " << a << endl;
    }
};
int main()
{

    student a;
    a.setdata(5).getdata();
    a.getdata();
}
