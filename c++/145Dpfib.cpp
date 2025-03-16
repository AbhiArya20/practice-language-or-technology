#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 4;
// memorization
vector<int> fibArr(N, -1);
vector<int> fibn(N, -1);
int fib(int n)
{
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;

    if (fibArr[n] != -1)
        return fibArr[n];
    int a = fib(n - 1);
    int b = fib(n - 2);
    fibArr[n] = a + b;
    return fibArr[n];
}

//tabulation

int fibo(int n)
{
    fibn[0] = 0;
    fibn[1] = 0;
    fibn[2] = 1;

    for (int i = 3; i <=n; i++)
    {
        fibn[i]=fibn[i-1]+ fibn[i-2]; 
    }
    return fibn[n];
    
}
int main()
{
    int n;
    cin >> n;
    cout << fib(n) << endl;
    cout << fibo(n) << endl;
}