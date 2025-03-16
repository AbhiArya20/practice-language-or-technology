#include <iostream>  
using namespace std;  
int add(int a , int b)  
{  
    return a+b;  
}  


void func1()  
{  
    cout<<"func1 is called";  
}  
void func2(void (*funcptr)())  
{  
    funcptr();  
}


int main()  
{  
    int (*funcptr)(int,int);  // function pointer declaration  
    funcptr=add; // funcptr is pointing to the add function  
    int sum=funcptr(5,5);  
    std::cout << "value of sum is :" <<sum<< std::endl;  
    
    func2(func1);  
    return 0;  
}  