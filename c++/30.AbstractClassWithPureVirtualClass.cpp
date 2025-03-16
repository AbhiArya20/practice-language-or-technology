#include <iostream>
#include <cstring>
using namespace std;
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0;
};
class CWHVideo : public CWH
{
    float VL;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        VL = vl;
    }
    void display()
    {
        cout << "title: " << title << endl;
        cout << "rating: " << rating << endl;
        cout << "length: " << VL << endl;
    }
};
class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, float wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "title: " << title << endl;
        cout << "rating: " << rating << endl;
        cout << "words: " << words << endl;
    }
};

int main()
{

    string title;
    float rating, VL;
    int words;

    title = "Abhishek vdo";
    VL = 34.4;
    rating = 4.5;
    CWHVideo first(title, rating, VL);

    title = "Abhishek txt";
    words = 344;
    rating = 4.5;
    CWHText second(title, rating, words);

    CWH *tuts[2];
    tuts[0] = &first;
    tuts[01] = &second;

    tuts[0]->display();
    tuts[1]->display();
}
