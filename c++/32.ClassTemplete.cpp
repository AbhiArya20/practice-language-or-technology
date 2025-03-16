#include <iostream>
using namespace std;
template <class T> //template <class T1, class T2> can also be declear for multiple parameter
                   //template <class T1=int, class T2=float> can also be declear for defult parameter, vector<>  at last and can be change
                   //template <class T1, class T2> can be used for funtion too as funtiom templete 
class vector 
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};



// Fuction template with overloading
template<class X> void fun(X a)  
{  
    std::cout << "Value of a is : " <<a<< std::endl;  
}  
template<class X,class Y> void fun(X b ,Y c)  
{  
    std::cout << "Value of b is : " <<b<< std::endl;  
    std::cout << "Value of c is : " <<c<< std::endl;  
}  

int main()
{
    vector<float> v1(3);
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.4;
    v1.arr[2] = 6.4;

    vector<float> v2(3);
    v2.arr[0] = 1.3;
    v2.arr[1] = 6.4;
    v2.arr[2] = 1.5;

    int a = v1.dotProduct(v2);
    cout << a << endl;
}