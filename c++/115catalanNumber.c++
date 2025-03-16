#include <iostream>
using namespace std;
int catalan(int n)
{
    if (n <= 1)
        return 1;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res += catalan(i) * catalan(n - i - 1);
    }
    return res;
}
int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << catalan(i) << " ";
    }
}

// Application
    // 1. possible BST
    // 2. paranthesis combination
    // 3. posible forest
    // 4. triangulation
    // 5. possible paths in matrix
    // 6. dividing a circle using n chords
    // 7 dyck word 