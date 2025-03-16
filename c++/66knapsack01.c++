#include <iostream>
using namespace std;

int knap(int wt[], int value[], int W, int noItem)
{
    if (noItem == 0 || W == 0)
        return 0; 
    if (wt[noItem - 1] > W)
        return knap(wt, value, W, noItem - 1);

    return max(knap(wt, value, W - wt[noItem - 1], noItem - 1) + value[noItem - 1], knap(wt, value, W, noItem - 1));
}
int main()
{
    int wt[] = {10, 20, 30};
    int value[] = {100, 50, 150};
    cout << knap(wt, value, 50, 3);
}