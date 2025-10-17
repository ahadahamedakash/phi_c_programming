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

    for (int i = 0; i < n / 2; i++)
    {

        long long int temp1 = arr[i];

        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%lld ", arr[i]);
    }

    return 0;
}

/*
    PROBLEM LINK: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
*/
