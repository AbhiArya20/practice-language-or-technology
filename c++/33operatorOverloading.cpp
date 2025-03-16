#include<bits/stdc++.h>
using namespace std;

class Complex{
    int real , imag;
    public: 
        Complex(int r = 0, int i = 0){
            real = r;
            imag = i;
        }
        Complex operator+(Complex const& obj){
            Complex res;
            res.real = real+obj.real;
            res.real = real+obj.imag;
        }
        void print(){
            cout<<this->real<<" + i"<<this->imag<<endl;
        }
};

int main(){
    Complex c1(10,5),c2(3,4);
    Complex c3 = c1+c2;
    c3.print();
}