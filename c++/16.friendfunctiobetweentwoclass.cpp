#include <iostream>
using namespace std;
class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumcomplex(complex, complex);
    int sumcomplex1(complex, complex);
};

class complex
{
    int a, b;
    friend int calculator ::sumcomplex(complex, complex);
    friend int calculator ::sumcomplex1(complex, complex);
    //friend class calculator
public:
    int setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void print()
    {
        cout << "the complex is " << a << "+" << b << "i" << endl;
    }
};
int calculator ::sumcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumcomplex1(complex o1, complex o2)
{
    return (o1.b + o2.b);
}



// friend class example
class A  
{  
    int x =5;  
    friend class B;           // friend class.  
};  
class B  
{  
  public:  
    void display(A &a)  
    {  
        cout<<"value of x is : "<<a.x;  
    }  
};  
int main()  
{  
    A a;  
    B b;  
    b.display(a);  
    return 0;  
}  


int main()
{
    complex a1, a2;
    a1.setdata(1, 4);
    a2.setdata(4, 5);
    calculator cal;
    int ras = cal.sumcomplex(a1, a2);
    int rasc = cal.sumcomplex1(a1, a2);
    cout << "the sum is " << ras << endl;
    cout << "the sum is " << rasc << endl;
}
