#include<bits/stdc++.h>
using namespace std;

int main(){


//for each loop
 int arr[] = { 10, 20, 30, 40 };
    for (int x : arr)
        cout << x << endl;


// lambda function 
// [](int i)
//     {
//         return i > 4;
//     }
}

//operator overloading
#include <iostream>
using namespace std;

class Complex {
private:
	int real, imag;
public:
	Complex(int r = 0, int i = 0) {real = r; imag = i;}
	
	// This is automatically called when '+' is used with
	// between two Complex objects
	Complex operator + (Complex const &obj) {
		Complex res;
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;
	}
	void print() { cout << real << " + i" << imag << endl; }
};

int main()
{
	Complex c1(10, 5), c2(2, 4);
	Complex c3 = c1 + c2;
	c3.print();
}
