#include <iostream>
using namespace std;
int a = 23;
int main()
{
    int b = 10;
    int a=55;
    cout << "the value of a in main: " << a << endl;
    cout << "the value of b in main: " << b << endl;
    cout << "the value of a in globe: " << ::a << endl;
}
// :: use to access a global variable value  in function while their is already variable with same name