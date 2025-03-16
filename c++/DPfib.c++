#include <bits/stdc++.h>
using namespace std;
int fibn[100] = {-1};
int fib(int n) //memorization
{
    if (n <= 1)
        return n;

    int first, second;

    if (fibn[n - 1] != -1)
        first = fibn[n - 1];
    else
        first = fib(n - 1);
    if (fibn[n - 2] != -1)
        second = fibn[n - 2];
    else
        second = fib(n - 2);

    return fibn[n] = first + second;


}

// int fibna(int n) //tabulation
// {
//     if (n <= 1)
//         return 1;
//     int fibn[n + 2];

//     fibn[0] = 0;
//     fibn[1] = 1;

//     for (int i = 2; i < n + 1; i++)
//     {
//         fibn[i] = fibn[i - 1] + fibn[i - 2];
//     }
//     return fibn[n];
// }

int main()
{
    int n;
    cin >> n;
    memset(fibn,-1,sizeof(fibn));
    cout << fib(n);
}