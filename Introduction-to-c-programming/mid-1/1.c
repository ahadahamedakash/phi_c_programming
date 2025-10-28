#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    long long int divisibleByTwo = 0;
    long long int divisibleByThree = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0 || (arr[i] % 2 == 0 && arr[i] % 3 == 0))
        {
            divisibleByTwo++;
        }
        else if (arr[i] % 3 == 0)
        {
            divisibleByThree++;
        }
    }
    printf("%lld %lld", divisibleByTwo, divisibleByThree);
    return 0;
}
