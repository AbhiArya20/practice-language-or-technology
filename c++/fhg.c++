#include <iostream>
#include <climits>
using namespace std;
// your code goes here
int *performOps(int *A, int len, int *blen)
{
    int i;
    *blen = len * 2;
    int *B = (int *)malloc((*blen) * sizeof(int));
    for (i = 0; i < len; i++)
    {
        B[i] = A[i];
        B[i + len] = A[(len - i) % len];
    }
    for (int i = 0; i < *blen; i++)
    {
        cout << B[i];
    }
}
int main()
{
    int len = 4;
    int A[] = {5, 10, 2, 1};
    int blen;
    performOps(A, len, &blen);
}