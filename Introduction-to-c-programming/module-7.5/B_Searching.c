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

    long long int target;
    scanf("%lld", &target);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            printf("%d", i);
            return 0;
        }
    }

    printf("-1");

    return 0;
}

// int n;
// scanf("%d", &n);

// long long target;
// scanf("%lld", &target);

// for (int i = 0; i < n; i++) {
//     long long x;
//     scanf("%lld", &x);
//     if (x == target) {
//         printf("%d\n", i);
//         return 0;
//     }
// }

// printf("-1\n");

