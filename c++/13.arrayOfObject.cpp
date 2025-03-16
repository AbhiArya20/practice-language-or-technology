#include <iostream>
using namespace std;
class employee
{
    int id, salary;

public:
    void entry()
    {
        salary = 122;
        cout << "enter your ID " << endl;
        cin >> id;
    }
    void display() { cout << "entered ID is " << id << endl; }
};

int main()
{
    int a;
    cout << "Enter total no of employees in your company" << endl;
    cin >> a;
    employee E[a];
    for (int i = 0; i < a; i++)
    {
        E[i].entry();
        E[i].display();
    }
}