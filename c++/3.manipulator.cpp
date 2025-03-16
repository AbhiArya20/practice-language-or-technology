#include<iostream>
#include<iomanip>
using namespace std;


// endl,setw
int main()
{
    int a=45,b=854,c=5465;
   
 
    cout<< " the value of a is " <<a<<endl;
    cout<< " the value of b is " <<b<<endl;
    cout<< " the value of c is " <<c<<endl;
    cout<< " the value of a is " <<setw(4)<<a<<endl;
    cout<< " the value of b is " <<setw(4)<<b<<endl;
    cout<< " the value of c is " <<setw(4)<<c<<endl;
}