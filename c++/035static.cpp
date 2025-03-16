#include <iostream>  
using namespace std;  
class Account {  
   public:  
       static int count; 
       static Account ac;
       Account(){}    
       Account(int accno, string name)   
        {    
           count++;  
        }  
        static void fun(){ // cannot override and can't be constant
            cout<<"Hello"<<endl;
        }
};  
int Account::count=0;  
class person {  
   public:  
       static Account ac;     
}; 
Account person:: ac;


int main(void) {  
    Account a1 =Account(201, "Sanjay"); //creating an object of Account  
    Account a2=Account(202, "Nakul");   
    Account a3=Account(203, "Ranjana");    
    cout<<"Total Objects are: "<<a1.count;  
    cout<<"Total Objects are: "<<Account::count;  
    return 0;  
} 