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

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            arr[i] = 2;
        }
        else if (arr[i] > 0)
        {
            arr[i] = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

// int n;
// scanf("%d", &n);

// for (int i = 0; i < n; i++) {
//     int x;
//     scanf("%d", &x);
//     if (x <= 10) printf("A[%d] = %d\n", i, x);
// }

/*
    PROBLEM LINK: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
*/
