#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int lastDigit = n / 1000;

    if (lastDigit % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}

/*
    PROBLEM LINK: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P
*/