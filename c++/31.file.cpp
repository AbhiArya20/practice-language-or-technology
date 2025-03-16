#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string st = "Abhishek kumar";
    string st2;
    // opening file using copy contructor and reading it
    ifstream in("sample.txt");
    in >> st2;
    cout << st2;
    getline(in, st2);
    cout << st2 << endl;
    getline(in, st2);
    cout << st2 << endl<<endl;
    getline(in, st2);
    cout << st2 << endl;

    // opening file using copy contructor and writting it
    ofstream out;
    out.open("sanple.txt");
    out << st;
    out<<"my name is"+ st;
    cout<<st;

    out.close();

    // eof()=end of file
    
} 