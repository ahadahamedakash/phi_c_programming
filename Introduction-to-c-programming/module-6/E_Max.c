#include <stdio.h>
#include <limits.h>

int main()
{
    int n;

    int maxNum = INT_MIN;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int value;
        scanf("%d", &value);

        if (value > maxNum)
        {
            maxNum = value;
        }
    }

    printf("%d", maxNum);

    return 0;
}

/*
    PROBLEM LINK: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
*/
