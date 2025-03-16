#include <iostream>
using namespace std;
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "constructor:" << count << endl;
    }
    ~num()
    {
        cout << "distructor:" << count << endl;
        count--;
    }
};

int main()
{
    cout << "main" << endl;
    cout << "creat" << endl;
    num n1;
    {
        cout << "entry" << endl;
        cout << "more creat" << endl;
        num n2, n3;
        cout << "exit" << endl;
    }
    cout << "back to main" << endl;
}