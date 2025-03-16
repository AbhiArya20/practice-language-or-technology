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
        cout << "marks: " << marks << endl;
    }
};
int main()
{
    int s = 3, q, w;

    student *ptr = new student[s];
    student *ptrt = ptr;
    for (int i = 0; i < s; i++)
    {
        cout << "enter roll no and marks:" << i + 1 << endl;
        cin >> q >> w;
        ptr->setdata(q, w);
        ptr++;
    }
    for (int i = 0; i < s; i++)
    {
        cout << "Student " << i + 1 << endl;

        ptrt->getdata();
        ptrt++;
    }
}