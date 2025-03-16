#include <bits/stdc++.h>
using namespace std;

// Armstrong means if we cube the digit of number and then add them so the result will be same as number.

int main()
{
    int number;
    cin >> number;
    int numberStoredTocheck = number;
    int ans = 0;
    while (number > 0)
    {
        int reminder = number % 10;
        ans =ans+ (reminder*reminder*reminder);
        number = number/ 10;
    }
    if (numberStoredTocheck == ans)
        cout << "YES";
    else
        cout << "NO";
}