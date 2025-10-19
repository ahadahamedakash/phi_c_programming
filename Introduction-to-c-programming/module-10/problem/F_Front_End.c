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

    int start = 0;
    int end = n - 1;
    int flag = 0;

    while (start <= end)
    {
        if (flag == 0)
        {
            printf("%d ", arr[start]);
            start++;
        }
        else if (flag == 1)
        {
            printf("%d ", arr[end]);
            end--;
        }

        flag = 1 - flag;
    }

    // int flag = 0;
    // int copy = n - 1;

    // for (int i = 0; i < n; i++)
    // {
    //     if (flag == 0)
    //     {
    //         printf("%d ", arr[0]);

    //         for (int j = 0; j < copy; j++)
    //         {
    //             arr[j] = arr[j + 1];
    //         }

    //         flag = 1;
    //     }
    //     else if (flag == 1)
    //     {
    //         printf("%d ", arr[copy]);

    //         flag = 0;
    //     }

    //     copy--;
    // }

    return 0;
}