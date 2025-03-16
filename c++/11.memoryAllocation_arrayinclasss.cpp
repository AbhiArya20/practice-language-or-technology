#include <iostream>
using namespace std;
class shop
{

    int itemid[100];
    int itemprice[100];
    int counter=0;

public:
   
    void setprice();
    void displayprice();
};

void shop ::setprice()
{
    cout << "enter the ID of the item no " << counter+1 << endl;
    cin >> itemid[counter];
    cout << "enter the price of the item no " <<counter+1<< endl;
    cin >> itemprice[counter];
    counter++;
}
void shop ::displayprice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with Id " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{
    shop dukan;

    for (int i = 1; i <=10; i++)
    {
        dukan.setprice();
    }

    dukan.displayprice();
}