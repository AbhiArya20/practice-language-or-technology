#include <stdio.h>
void printd(int n)//decreasing
{
    if (n == 1)
    {
        printf("%d ", n);
        return;
    }
    printf("%d ", n);
    printd(n - 1);
}
void printa(int n)//increasing
{
    
    if (n == 1) 
    {
        printf("%d ", n);
        return;
    }
    printa(n-1);
    printf("%d ", n);
}
int main()
{
    int n;
    scanf("%d",& n);
    printd(n);
    printa(n);
}