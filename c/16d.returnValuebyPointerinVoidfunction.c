#include <stdio.h>

int SumAvg(int t, int x, int *sum, float *average) //two value return sum, average
{
    *sum = t + x;
    *average = *sum / 2;
}
int main()
{
    int t = 5, x = 7, sum;
    float average;
    SumAvg(t, x, &sum, &average);
    printf("%d %f", sum, average);
}