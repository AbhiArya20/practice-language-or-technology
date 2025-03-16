#include <iostream>
using namespace std;
class student
{
    int roll_no, marks;

public:
    int setdata(int a, int b)
    {
        roll_no = a;
        marks = b;
    }
    void getdata()
    {
        cout << "Roll number: " << roll_no << endl;
        cout << "Roll number: " << marks << endl;
    }
};
int main()
{
    student *ptr=new student;
    (*ptr).setdata(5,6);
    (*ptr).getdata();

    ptr->setdata(5,7);
    ptr->getdata();

    student *ptr1=new student[4];
    
    ptr->setdata(5,7);
    ptr->getdata();
}