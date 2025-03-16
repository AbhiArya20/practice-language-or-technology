// HCF

#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
   
    while (m != 0)
    {
       int temp = n % m;
        n = m;
        m = temp;
    }
    printf("%d", n);
}