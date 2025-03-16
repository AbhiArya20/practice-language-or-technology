#include <iostream>
using namespace std;

int Count(int s, int e)
{
    if (s == e)
        return 1;
    if (s > e)
        return 0;
    int count = 0;
    for (int i = 1; i <= 6; i++)
        count += Count(s + i, e);
    return count;
}
int main()
{

    cout << Count(0, 3);
}