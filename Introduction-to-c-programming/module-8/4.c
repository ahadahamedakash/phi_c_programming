#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    long long int positiveSum = 0;
    long long int negativeSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positiveSum += arr[i];
        }
        else if (arr[i] < 0)
        {
            negativeSum += arr[i];
        }
    }

    printf("%lld %lld", positiveSum, negativeSum);

    return 0;
}
