#include <stdio.h>
#include <limits.h>

int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int minNum = INT_MAX;
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minNum)
        {
            minNum = arr[i];
            index = i + 1;
        }
    }

    printf("%d %d", minNum, index);

    return 0;
}

/*
    PROBLEM LINK: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E
*/
