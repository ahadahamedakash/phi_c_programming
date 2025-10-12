#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        if (b >= c)
        {
            printf("%d ", c);
        }
        else
        {
            printf("%d ", b);
        }
        printf("%d", a);
    }
    else if (b >= a && b >= c)
    {
        if (a >= c)
        {
            printf("%d ", c);
        }
        else
        {
            printf("%d ", a);
        }
        printf("%d", b);
    }
    else if (c >= a && c >= b)
    {
        if (a >= b)
        {
            printf("%d ", b);
        }
        else
        {
            printf("%d ", a);
        }
        printf("%d", c);
    }

    return 0;
}

/*
    PROBLEM LINK: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
*/
