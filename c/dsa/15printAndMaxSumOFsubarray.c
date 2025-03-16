#include <stdio.h>
void sumOfSubarray(int arr[], int n)
{
    int maxSum = -__INT_MAX__;
    for (int k = 0; k < n; k++)
    {
        for (int i = k; i < n; i++)
        {
            int sum = 0;
            for (int j = k; j <= i; j++)
            {
                printf("%d ", arr[j]);
                sum += arr[j];
            }
            if (sum > maxSum)
            {
                maxSum = sum;
            }
            printf("\n");
        }
    }
    printf("%d", maxSum);
}

int cummulativeAproach(int arr[], int n)
{
    int cm[n + 1];
    cm[0] = 0;
    int max = -__INT_MAX__;
    for (int i = 1; i <= n; i++)
    {
        cm[i] = cm[i - 1] + arr[i - 1];
    }

    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = cm[i] - cm[j];
            if (sum > max)
                max = sum;
        }
    }
    return max;
}

int kadaneAlgo(int arr[], int n)
{
    
    int currentSum = 0;
    int maximunSum = -__INT_MAX__;
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];

        if (currentSum < 0)
            currentSum = 0;
        if (currentSum > maximunSum)
            maximunSum = currentSum;
    }
    return maximunSum;
}
//subArray of circular array change the sign of all element find then find maximum using kadane algo then maxsum= totalsum-kadanemaxSum;
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sumOfSubarray(arr, n);
    printf("\n%d", cummulativeAproach(arr, n));
    printf("\n%d", kadaneAlgo(arr, n));
}