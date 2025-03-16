#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    int getdata(int x);

protected:
    void Print()
    {
        cout << "the roll number  is " << roll_number << endl;
    }
};

int student::getdata(int x)
{
    roll_number = x;
}

class Marks : public virtual student
{
protected:
    int maths, physics;

public:
    int get_data(int y, int z)
    {
        maths = y;
        physics = z;
    }

protected:
    void Print0()
    {
        cout << "the marks of maths is " << maths << endl;
        cout << "the marks of physics is " << physics << endl;
    }
};
class sport : virtual public student
{
protected:
    int score;

public:
    int get_data1(int c)
    {
        score = c;
    }

protected:
    void Print1()
    {
        cout << "the marks of score marks is " << score << endl;
    }
};
class result : public Marks, public sport
{
    int total;
    ;

public:
    void Print2()
    {
        total = maths + physics + score;

        Print();

        Print0();

        Print1();
        cout << "the total is " << total << endl;
    }
};

int main()
{
    result Abhi;
    Abhi.getdata(1);
    Abhi.get_data(90, 99);
    Abhi.get_data1(8);
    Abhi.Print2();
    return 0;
}