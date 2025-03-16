#include <iostream>
using namespace std;
float money(float a, float b = 1.04)
{
    return a * b;
}
int main()
{
    int a;
    cout << "enter your balance" << endl;
    cin >> a;
    cout << " you will recieve " << money(a) << " for " << a << " in a year"<<endl;
    cout << "if you are VIP the you will recieve " << money(a, 1.1) << " for " << a << " in a year";
}
// default argument is always written in last