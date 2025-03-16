#include <iostream>
#include <cstring>
using namespace std;
class Binary
{
    char a[200];

public:
    void get()
    {
        cout << "enter a binary number" << endl;
        cin >> a;
        display();
    }
    void display();
    void check();
    void compliment();
    void comdis();
};
void Binary ::display()
{
    cout << "you have enter " << a << endl;
}

void Binary ::check()
{
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] != '1' && a[i] != '0')
        {
            cout << "this is not binary number";
            exit(0);
        }
    }
}
void Binary ::compliment()
{
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == '1')
        {
            a[i] = '0';
        }
        else
        {
            a[i] = '1';
        }
    }
}
void Binary ::comdis()
{
    cout << "the compliment is " << a << endl;
}
int main()
{
    Binary Abhishek;
    Abhishek.get();

    Abhishek.check();
    Abhishek.compliment();
    Abhishek.comdis();
}